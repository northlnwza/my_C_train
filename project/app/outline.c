void	parse_cmd(char *input)
{
	if (ft_strcmp(input, "help") == 0)
	{
		printf("type \"exit\" to quit program\n");
	}
	else if (ft_strcmp(input, "exit") == 0)
	{
		printf("Bye Bye Bye ...\n");
		free(input);
		exit(0);
	}
	else 
		printf("type \"help\" to see all command program\n");
}

void	outline(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (LIMIT + 1));
	printf("pls enter command : ");
	while (str != 0)
	{
		parse_cmd(strinput(str));
		printf("pls enter command : ");
	}
}
