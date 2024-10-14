#include <unistd.h>

int	alphanumeric(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else 
		return (0);
}

int	ft_wordcounts(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while(str[i])
	{	
		if (alphanumeric(str[i]) == 1 && alphanumeric(str[i + 1]) == 0) 
			count++;
		i++;
	}
	return (count);
}

void	ft_putnbr(int nbr)
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
		nbr *= -1;
		write(1, "-", 1);
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		nbr = nbr % 10;
	}
	c = nbr + '0';
	write(1, &c, 1);
}

int	main(void)
{
	char	*s;	
	
	s = "1,2,3,4,5,6,7,8,9,a hello///world&  test1 test2";
	ft_putnbr(ft_wordcounts(s));
	return (0);
}
