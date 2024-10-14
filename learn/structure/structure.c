#include <stdio.h>

struct student
{
	int	rollno;
	char	name[20];
	float	marks;
};

struct	question
{
	int	a;
	float	b;
	int	c;
};

int	main(void)
{
	struct	student	s1 = {1, "north", 90};
	struct	student	s2;
	struct	student	std[3];
	struct	student *ptr = &s1;
	struct	question q = {.b = 1, .c = 10, .a = 15};

	std[0].rollno = 1;
	printf("info for s1");
	printf("\n %d %s %f", ptr->rollno, ptr->name, ptr->marks);
	printf("\n %d %s %f", (*ptr).rollno, (*ptr).name, (*ptr).marks);
	printf("\n enter info for s2");
	scanf("\n %d %s %f", &s2.rollno, s2.name, &s2.marks);
	printf("\n %d %s %f", s2.rollno, s2.name, s2.marks);
	printf("\n %d %f %d", q.a, q.b, q.c);
	return (0);
}
