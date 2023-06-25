#include <stdio.h>
int main(){
	int choice;
	printf("enter a number(but only first number is considered): ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("True");
			break;
		case 0:
			printf("\nfalse");
			break;
		default:
			printf("\ninvalid input");
	}
}



{
	int choice;
	printf("enter the ASCI value: ");
	scanf("%d", &choice);
	switch(choice)
	{
		case '1':
			printf("True");
			break;
		case '0':
			printf("\nfalse");
			break;
		default:
			printf("\ninvalid input");
	}
}



{
	char choice;
	printf("enter the value: ");
	scanf("%c", &choice);
	switch(choice)
	{
		case '1':
			printf("True");
			break;
		case '0':
			printf("\nfalse");
			break;
		default:
			printf("\ninvalid input");
	}
}

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
