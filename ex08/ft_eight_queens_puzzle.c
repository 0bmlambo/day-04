#include <stdio.h>


int available(int p[8], int x, int y)
{
	int i;

	i = 1;
	while (i < y)
	{
		if (p[i -1] == x || p[i - 1] - i == x - y || p[i - 1] + i == x + y)
			return (0);
		i++;
	}
	return (1);
}
int recur(int p[8], int x, int y)
{
	int r; 
	int nx;

	if (y == 8)
		return (1);
	p[y - 1] = x;
	nx = 1;
	r = 0;
	while (nx <= 8)
	{
		if (nx != x && available(p, nx, y + 1))
			r += recur(p, nx, y +1);
		nx++;
	}
	return (r);
}
int ft_eight_queens_puzzle(void)
{
	int p[8];
	int x;
	int r;

	x = 1;
	r = 0;
	while (x <= 8)
	{
		r += recur(p, x, 1);
		x++;
	}
	return (r);
}

