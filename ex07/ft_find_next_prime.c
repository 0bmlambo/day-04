#include <stdio.h>

int down_sprt(int nb)
{
	int r;

	if (nb < 0)
		return(-2);
	if (nb <= 1)
		return (-1);
	r = 2;
	while (r * r <= nb)
	{
		if (r * r == nb)
			return (-1);
		r++;
	}
	return (r - 1);
}
int ft_is_prime(int nb)
{
	int up;
	int i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	up = down_sprt(nb);
	if (up < 1)
		return (0);

	i = 2;
	while (i <= up)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
int ft_find_next_prime(int nb)
{
	int i;

		i = nb;
	while (1)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (42);
}

