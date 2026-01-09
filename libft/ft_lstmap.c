/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapaydin <kapaydin@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 12:17:59 by kapaydin          #+#    #+#             */
/*   Updated: 2026/01/09 12:54:07 by kapaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**new;

	if (!lst || !f || !del)
		return (NULL);
	new = malloc(sizeof(t_list *));
	if (!new)
		return (NULL);
	*new = ft_lstnew(f((lst)->content));
	if (!*new)
		return (NULL);
	while (lst->next)
	{
		if (!f((lst)->content))
			ft_lstclear(new, del);
		ft_lstadd_back(new, ft_lstnew(f((lst)->content)));
	}
	return (*new);
}
