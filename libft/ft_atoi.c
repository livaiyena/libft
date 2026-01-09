/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapaydin <kapaydin@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 09:47:03 by kapaydin          #+#    #+#             */
/*   Updated: 2026/01/09 09:47:04 by kapaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitespace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

static int	ft_isoperator(char c)
{
	return (c == '-' || c == '+');
}

int	ft_atoi(const char *str)
{
	long	result;
	int		minus;

	minus = 1;
	result = 0;
	while (ft_iswhitespace(*str))
		str++;
	if (ft_isoperator(*str))
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result *= 10;
		result += (*str) - '0';
		str++;
	}
	return ((int)(result * minus));
}
