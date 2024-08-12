#include <unistd.h>
int	atoi(char *str)
char    *itoa(int nbr)
int	main(int arg_c, char **arg_v)
{
	int	i;

	i = 1;
	while (arg_v[i])
	{
		printf("%s", arg_v[i]);
		i++;
	}
}
 