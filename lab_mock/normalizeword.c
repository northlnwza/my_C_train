#include <stdio.h>
#include <stdlib.h>
#define LINE 80

char	*str_input(void)
{
	int	i;
	char	*buffer;
	int	ch;

	buffer = (char *)malloc(sizeof(char) * (LINE + 1));
	i = 0;	
	while (i < LINE && ch != EOF && ch != '\n')
	{
		ch = getchar();
		if (ch == '\n')
			continue;
		buffer[i] = ch; 
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

int	is_alpha(char ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	else
		return (0);	
}

int	count_word(char *str)
{
	int	i;
	int	count_word;

	count_word = 0;
	i  = 0;
	while (str[i])
	{
		if ((is_alpha(str[i]) == 1) && is_alpha(str[i+1]) == 0)
			count_word++;
		i++;
	}
	return (count_word);
}

char	*trans_alpha(char *str)
{
	int	i;
	int	status;
	
	i = 0;
	while (str[i])
	{
		if (is_alpha(str[i]) == 1)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] - 'A' + 'a';
		}
		i++;
	}
	i = 0;
	status = 0;
	while (str[i])
	{
		if ((is_alpha(str[i]) == 1) && status == 0)
		{
			str[i] = str[i] - 'a' + 'A';
			status = 1;
		}
		if ((is_alpha(str[i]) == 0))
			status = 0;
		i++;
	}
	return (str);
}

void	normalize_word(void)
{
	int	i;
	int	count_char;
	char	*str;

	printf("Input message  : ");
	str = str_input();
	i = 0;
	count_char = 0;
	while (str[i])
	{
		if (is_alpha(str[i]) == 1)
			count_char++;
		i++;
	}
	printf("Output message : %s\n", trans_alpha(str));
	printf("Number of characters = %d\n", count_char);
	printf("Number of word = %d\n", count_word(str));
	free(str);
}

int	main(void)
{
	normalize_word();
	return (0);
}
