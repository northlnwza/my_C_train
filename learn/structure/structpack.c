#include <stdio.h>

#pragma pack(1)
struct abc
{
	char	a;
	int	b;
	double	c;
};

void	main(void)
{
	struct	abc	s;
	
	printf("%d\n", sizeof(s));	
}
