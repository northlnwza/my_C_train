#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

int	word_l(char *s, int ref)
{
	int	i;
	int	str_l;
	int	endword;
	int	status;
	int	status1;

	i = 0;
	status = 0;
	status1 = 0;
	endword = 0;
	str_l = 0;
	while(s[i])
	{	
		if (alphanumeric(s[i]) == 1)  
		{
			status1 = 0;
			str_l++;
		}
		else if (alphanumeric(s[i]) == 0 && status1 == 0)
		{
			status1 = 1;
			endword++;	
		}
		if(ref - endword == 1 && ref != 1 && status == 0)
		{
			str_l = 0;
			status = 1;
		}
		if(endword == ref)
			break;
		i++;
	}
	return (str_l);
}

char	*feedword(char *s, int ref)
{
	char	*str;
	int	i;
	int	word_i;
	int	word_f;
	int	current_word;

	i = 0;
	current_word = 1;
	while (s[i] != 0 && current_word <= ref)
	{
		while (s[i] != 0 && alphanumeric(s[i]) != 1)
			i++;
		word_i = i;
		while (s[i] != 0 && alphanumeric(s[i]) != 0)
			i++;
		word_f = i;
		current_word++;
	}
	str = (char *)malloc(sizeof(char) * (word_f - word_i + 1));
	i = word_i;
	while (i < word_f)
	{
		str[i - word_i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char	**ft_wordsplit(char *s)
{
	char	**array_str;
	int	word_c;
	int	i;

	word_c = ft_wordcounts(s);
	array_str = (char **)malloc(sizeof(char *) * (word_c));
	if (array_str == 0)
		return (array_str);
	i = 0;
	while (i < word_c)
	{
		array_str[i] = feedword(s, i + 1);
		if (array_str[i] == 0)
			return (0);
		i++;
	}
/*
	array_str[0] = "abc";
	array_str[1] = "def";
	array_str[2] = "ghi";
*/
	return (array_str);
}

int	main(void)
{
	char	*s;	
	char	**str;
	int	i;
	int	j;
	int	word_c;
		
	s = "1,2,3,4,5,6,7,8,9,a hellooooo///world&  test1 test2";
	word_c = ft_wordcounts(s);
	printf("%s\n", s);
	i = 1;
	while (i <= word_c)
	{
		printf("%d ", word_l(s, i));
		i++;
	}
	printf("\n");
	str = ft_wordsplit(s);
	i = 0;
	while (i < word_c)
	{
		j = 0;
		while (str[i][j])
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	i = 0;
	while (i < word_c)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (0);
}
