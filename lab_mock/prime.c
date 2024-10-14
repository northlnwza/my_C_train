#include <stdio.h>

int	main(void)
{
	int	p;
	int	n;

	scanf("%d", &p);
	n = 2;
	while (n <= p / n)
	{
		if (p % n == 0)
		{
			printf("%d is not prime\n", p);
			return (0);
		}
		n++;
	} 
	printf("%d is prime\n", p);
	return (0);
}
