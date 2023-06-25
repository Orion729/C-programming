#include <stdio.h>
int main()
{
	int a;
	printf("enter the number :");
	scanf("%d", &a);
	(a<10)?printf("number is less than 10"):printf("number is greater than 10");
}

{
	float a;
	printf("enter your marks :");
	scanf("%f", &a);
	
	if(a>90)
	{
		printf("grade A");
	} 
	else if(a>80 && a<89.99)
	{
		printf("grade B");
	}
	else if(a>70 && a<79.99)
	{
		printf("grade C");
	}
	else if(a>60 && a<69.99)
	{
		printf("grade D");
	}
	else if(a>50 && a<59.99)
	{
		printf("grade E");
	}
	else if(a<50)
	{
		printf("grade F");
	}
}
