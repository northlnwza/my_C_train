#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	int	buff;
	float	sum_n;
	int	n;
	int	array[10];
	
	i = 0;
	sum_n = 0;
	n = 0;
	while (i < 10)
	{
		printf("score%d : ", i + 1);	
		scanf("%d", &array[i]);
		if (array[i] > 0)
		{
			sum_n = sum_n + array[i];	
			n++;
		}
		i++;
	}
	buff = 0;
	i  = 0;
	while (i < 10)
	{
		j  = 0;
		while (j < 9)
		{
			if (array[j] < array[j + 1])
			{
				buff = array[j];
				array[j] = array[j + 1]; 
				array[j + 1] = buff;
			}		
			j++;
		}
		i++;
	}
	printf("\n");
	printf("The Fourth Score = %d\n", array[3]);
	printf("\n");
	printf("Average Score = %.2f", sum_n / n);
}
