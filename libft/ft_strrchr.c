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
			break;
		str++;
	}
	return (last);
}
