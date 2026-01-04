#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	if (!*little)
		return ((char *)big);
	k = 0;
	while (k < len && big[k])
	{
		i = 0;
		while (big[k + i] == little[i] && i + k < len)
		{
			i++;
			if (!little[i])
				return ((char *)(big + k));
		}
		k++;
	}
	return (NULL);
}
