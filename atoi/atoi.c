int	atoi(char *str)
{
	int	i;
	int	nbr;
	int	isneg;

	i = 0;
	nbr = 0;
	isneg = 1;
	while (str[i] == ' ' && (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			isneg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + str[i] - '0';
		i++;
	}
	return (nbr * isneg);
}
