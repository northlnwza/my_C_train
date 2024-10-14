#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;

	scanf("%d", &n);
	int	Tribo[n];
	i = 4;
	Tribo[1] = 0;
	Tribo[2] = 0;
	Tribo[3] = 1;
	while (i <= n)
	{
		Tribo[i] = Tribo[i - 3] + Tribo[i - 2] + Tribo[i - 1];
		i++;
	}
	printf("%d\n", Tribo[n]);
}
