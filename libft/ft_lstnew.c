/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapaydin <kapaydin@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 09:47:55 by kapaydin          #+#    #+#             */
/*   Updated: 2026/01/09 12:54:55 by kapaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	if (!content)
		return (NULL);	
	ptr = malloc(sizeof(t_list));
	if (ptr)
	{
		ptr->content = content;
		ptr->next = NULL;
		return (ptr);
	}
	return (NULL);
}
