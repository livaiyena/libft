#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	s += start;
	ft_memcpy(substr, s, len - 1);
	substr[len - 1] = '\0';
	return(substr);
}
