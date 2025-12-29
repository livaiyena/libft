#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*dest_start;
	if (!dest || !src)
		return (0);
	dest_start = dest;
	while (n > 0 && *src)
	{
		*dest_start++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest_start++ = '\0';
		n--;
	}
	return (dest);
}
