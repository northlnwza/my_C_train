#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	int	arr[5] = {2, 1, 3, 5, 4};
	int	buff;

	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 4)
		{
			if (arr[j] > arr[j + 1])
			{
				buff = arr[i];
				arr[i] = arr[j];
				arr[j] = buff;		
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 5)
	{
		printf("%d\n",arr[i]);
		i++;
	}
	return (0);
}
