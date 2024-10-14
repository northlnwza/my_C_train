#include <stdio.h>
#include <stdlib.h>
#define LIMIT 80

char	*str_input(void)
{
	int	i;
	char	*buffer;
	int	ch;

	buffer = (char *)malloc(sizeof(char) * (LIMIT + 1));
	i = 0;	
	while (i < LIMIT && ch != EOF && ch != '\n')
	{
		ch = getchar();
		if (ch == '\n')
			continue;
		buffer[i] = ch; 
		i++;
	}
	buffer[i] = 0;
	return buffer;
}

int	main(void)
{
	char	*buffer;

	printf("Input message  : ");
	buffer = str_input();
	printf("Output message : %s\n", buffer);
	free(buffer);
	return (0);
}

