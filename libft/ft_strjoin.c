#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (i + j + 1));
	ft_memcpy(str, s1, i);
	ft_memcpy(str + i - 1, s2, j);
	str[i + j - 1] = '\0';
	return (str);
}
