#include "header.h"

struct User
{
	char	username[100];
	char	password[100];
};

int	login(char *dst, char *src)
{
	struct User user;			
	ft_strcpy(user.username, "username");
}

