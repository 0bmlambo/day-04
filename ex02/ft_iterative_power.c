#include <unistd.h>
#include <stdio.h>

int    ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if((nb == 0 && power !=0) || power < 0)
		return (0);
	else
	{
		while (power > 0)
		{
			result = nb * result;
			power--;
		}
		return(result);
	}
}

int main()
{
	printf("%d", ft_iterative_power(2,2));
	return(0);
}
