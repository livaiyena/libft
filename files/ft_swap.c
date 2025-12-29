#include "libft.h"

void	ft_swap(int *a, int *b)
{
	int		temp;

	if (!a || !b || *a == *b)
		return;	
	temp = *a;
	*a = *b;
	*b = temp;
}