#include <unistd.h>

int	ft_strl(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
		n += 1;
		str++;
	}	
	return (n);
}

void	ft_nbrbase(char *baseform, int dec_in)
{
	bfl = ft_strl(baseform);
}

int	atoi(char *str)
{
	int	nbr;
	
	nbr  = 0;
	while (*str)
	{
		nbr = (nbr * 10) + *str - '0';
		str++;
	}
	return (nbr);
}

int	main(int arg_c, char **arg_v)
{
	ft_nbrbase(arg_v[1], atoi(arg_v[2]));
	return (0);
}
