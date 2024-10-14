#include <stdio.h>
#include <stdlib.h>

void	absent_check(void)
{
	int	all_std;
	int	arrive_std;
	int	i;
	int	j;
	int	status;
	int	*All_std;
	int	*Arrive_std;

	printf("Number of all students      : ");
	scanf("%d", &all_std);
	All_std = (int *)malloc(sizeof(int) * all_std); 
	i = 0;
	while (i < all_std)
	{
		All_std[i] = i + 1;
		i++;
	}
	printf("Number of arrived students  : ");
	scanf("%d", &arrive_std);
	Arrive_std = (int *)malloc(sizeof(int) * arrive_std);
	printf("ID of arrived students      : ");
	i = 0;
	while (i++ < arrive_std)
		scanf("%d", Arrive_std + i);
	i = 0;
	while (i++ < arrive_std)
		printf("Arrive: %d\n", Arrive_std[i]);
	
	printf("ID of students that absent  : ");
	i = 0;
	j = 0;
	status = 0;
	while (i < arrive_std)
	{
		j = 0;
		while (j < all_std)
		{
			if(All_std[i] == Arrive_std[j])
			{
				status = 1;
				break;	
			}
			j++;
		}
		if(status == 0 && All_std[i] != Arrive_std[j])
			printf("%d ", All_std[i]);
		i++;
	}
	printf("\n");
	printf("Percentage of absent students : %.2f%%\n", ((all_std - arrive_std) / (float)all_std) * 100);
	free(All_std);
	free(Arrive_std);
}

int	main(void)
{
	absent_check();	
	return (0);
}

