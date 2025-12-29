#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*temp;

	if (!dest || !src)
		return (NULL);
	temp = dest;
	while (*src)
		*temp++ = *src++;
	*temp = '\0';
	return (dest);
}
