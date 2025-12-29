#include "libft.h"

void	ft_swap_xor(int *a, int *b)
{
	if (!a || !b || a == b)
		return;
	*a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}