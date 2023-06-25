#include <stdio.h>

//----------------USER DEFINED DATA TYPE----------------------
struct info  // defintion of structure
{
	char name[20];
	int rollno;
	char section[6];
	char mob[15];
	char add[10];
	double cgpa;
}s1={"nakul",8,"KOCET","9825364712","rohtak",8.12};
main()
{
	struct info s1[70], *p;
	p = &s1;
	
	for(int i=0;i=2;i++)
	{
	scanf("\n NAME=%s", (*p).name);
	scanf("\n ROLL NO=%d", &s1[i].rollno);
	scanf("\n SECTION=%s", s1[i].section);
	scanf("\n MOBILE=%s", s1[i].mob);
	scanf("\n ADD=%s", s1[i].add);
	scanf("\n CGPA=%1f", &s1[i].cgpa);
	}
	for(int i=0;i<2;i++)
	{
	printf("\n NAME=%s", s1[i].name);
	printf("\n ROLL NO=%d", s1[i].rollno);
	printf("\n SECTION=%s", s1[i].section);
	printf("\n MOBILE=%s", s1[i].mob);
	printf("\n ADD=%s", s1[i].add);
	printf("\n CGPA=%1f", s1[i].cgpa);
	}
		
}
