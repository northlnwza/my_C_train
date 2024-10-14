#include <stdio.h>
#include <stdlib.h>
#define LIMIT 80

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != 0 && *s2 != 0)
	{
		if (*s1 - *s2 != 0)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	*strinput(char *str)
{
	int	i;
	int	ch;

	i = 0;
	while (ch != '\n' && i < LIMIT)
	{	
		ch = getchar();
		if (ch == '\n')
			continue;
		str[i] = ch;
		i++;
	}
	str[i] = 0;
	return (str);
}

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
