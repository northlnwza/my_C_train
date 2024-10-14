#include "header.h"

int	main()
{
	char	*ptr;
	char	*dst;
	
	ptr = "kuyyyyyyyy";
	dst = (char *)malloc(sizeof(char) * (ft_strl(ptr) + 1));
	ft_strcpy(dst, ptr);
	printf("%s\n", dst);
	return (0);
}
