#include <stdio.h>
int main()
{
	int a = 10, b = 20;
	(a==b)? printf("A==B"): (a>b)? printf("A>B"):printf("A<B");
}
{
	int a,b,c;
	printf("enter the first number: ");
	scanf("%d", &a);
	printf("enter the second number: ");
	scanf("%d", &b);
	printf("enter the third number: ");
	scanf("%d", &c);
	if(a==b && a==c && b==c){
		printf("A is equal to b is equal to c");
		
	}  if(a>b && a>c){
			printf("A is greater than B and C");
	}	else if(b>c && b>a){
			printf("B is greater than A and C");
	}		else{
				printf("C is greater than A and B");
	}
}
{
	int a,b,c;
	printf("enter the number a: ");
	scanf("%d", &a);
	printf("enter the number b: ");
	scanf("%d", &b);
	printf("enter the number c: ");
	scanf("%d", &c);
	(a==b && b==c && a==c)? printf("a is equal to b and c"): (a>b && a>c)? printf("a is greater than b and c"): (b>c && b>a)? printf("b is greater than a and c"):printf("c is greater than a and b");
}


