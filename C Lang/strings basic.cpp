#include <stdio.h>
#include <string.h>
main()
{
	//char name[]="nakul";
	char s1[]="well";
	char s2[]="well";
	int n=0;
	n = strcmp(s1,s2);
	if (n==0)
	printf("\n strings are same %d", n);
	else
	printf("\n strings are diff...%d", n);
	//int len = strlen(name);
	//printf("%d", len);
	
}
