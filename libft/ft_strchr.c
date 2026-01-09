/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapaydin <kapaydin@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 09:48:18 by kapaydin          #+#    #+#             */
/*   Updated: 2026/01/09 09:56:58 by kapaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int chr)
{
	char	c;

	c = (char)chr;
	while (*str != c)
	{
		if (!*str)
			return (NULL);
		str++;
	}
	return ((char *)str);
}
