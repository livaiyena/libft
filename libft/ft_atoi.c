#include "libft.h"

int	ft_atoi(const char *str)
{
	long	result;
	int		minus;

	if (!str)
		return (0);
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
