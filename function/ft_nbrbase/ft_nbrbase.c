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
	int	bfl;

	bfl = ft_strl(baseform);
	if (dec_in / bfl != 0)
		ft_nbrbase(baseform, dec_in / bfl);
	else
		if (bfl <= dec_in)
			write(1, &baseform[dec_in / bfl], 1);

	write(1, &baseform[dec_in % bfl], 1);
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
	write(1, "\n", 1);
	return (0);
}
