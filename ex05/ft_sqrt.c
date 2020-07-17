#include <stdio.h>


int ft_sqrt(int nb)
{
	int r;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	r = 2;
	while (r * r <= nb)
	{
		if ( r * r == nb)
			return (r);
		r++;
	}
	return (0);
}
