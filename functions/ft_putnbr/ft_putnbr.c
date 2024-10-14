 #include <unistd.h>

void	ft_putnbr(int	nbr)
{
	char	c;

	if (nbr == -2147483648)
	{
		nbr = 147483648;
		write(1, "-", 1);
		write(1, "2", 1);
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * (-1);
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		nbr = nbr % 10;
	}
	c = nbr + '0';
	write(1, &c, 1);
}

int	atoi(char *s)
{
	int	num;
	int	sign;
	
	num = 0;
	sign = 1;
	while (*s)
	{
		if (*s == '-')
			sign = -1;
		else
			num = num * 10 + *s - '0';		
		s++;
	}
	return (num * sign);
}

int	main(int arg_c, char **arg_v)
{
	if (arg_c == 1)
		return (0);	
	ft_putnbr(atoi(arg_v[1]));
	printf("\n%d\n", atoi(arg_v[1]));
	return (0);
}
