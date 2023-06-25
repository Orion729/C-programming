#include <stdio.h>
typedef struct
{
	char name[10];
	int roll[5];
	char section[6];
	char mob[10];
}student;

main()
{
	student s1, *p;
	p = &s1;
	printf("\n enter your name: ", (*p).name);
	scanf("%s", &(*p).name);
	printf("\n enter your roll: ", (*p).roll);
	scanf("%d", &(*p).roll);
	printf("\n enter your section: ", (*p).section);
	scanf("%s", &(*p).section);
	printf("\n enter your mob: ", (*p).mob);
	scanf("%s", &(*p).mob);
}


