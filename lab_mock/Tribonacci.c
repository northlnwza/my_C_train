#include <stdio.h>

int	Tri(int	n)
{
	if (n == 1)
		return (0);
	if (n == 2)
		return (0);
	if (n == 3)
		return (1);
	return (Tri(n - 3) + Tri(n - 2) + Tri(n - 1));
}
int	main(void)
{
	int	n;

	printf("Tribonacci Position : ");
	scanf("%d", &n);
	printf("Value of Tribonacci : %d",Tri(n));
	return (0);
}
