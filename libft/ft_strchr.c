#include "libft.h"

char	*ft_strchr(const char *str, int chr)
{
	char c;

	c = (char)chr;
	while (*str != c)
	{
		if (!*str)
			return (NULL);
		str++;
	}
	return ((char *)str);
}