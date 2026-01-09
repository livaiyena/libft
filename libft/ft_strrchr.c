/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapaydin <kapaydin@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 09:48:34 by kapaydin          #+#    #+#             */
/*   Updated: 2026/01/09 09:52:14 by kapaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	char	*last;
	char	c;

	c = (char)chr;
	last = NULL;
	while (1)
	{
		if (*str == c)
			last = (char *)str;
		if (!*str)
			break ;
		str++;
	}
	return (last);
}
