#include <stdio.h>
int main()
{
	int choice, a, b;
	printf("Press [1] for ADD \nPress [2] for SUB \nPress [3] for DIV \nPress [4] for MUL \nEnter your choice: ");
	scanf("%d", &choice);
	
	printf("enter first number: ");
	scanf("%d", &a);
	printf("enter second number: ");
	scanf("%d", &b);
	
	switch(choice)
	{
		case 1:
			printf("ADD is: %d", a+b);
			break;	
	
		case 2:			
			printf("SUB is: %d", a-b);
			break;
		
		case 3:		
			printf("DIV is: %d", a/b);
			break;	
	
		case 4:			
			printf("MUL is: %d", a*b);
			break;
			
		default:
			printf("invalid choice");
	}
}

int main()
{
	int n=1;
	while (n<11)
	{
	printf("%d", n);
	n=n+1;
	}
}

