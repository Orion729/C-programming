#include <stdio.h>

//--------------- DO WHILE LOOP -------------

int main()
{
	int n = 1;
	do
	{
		printf("%d", n);
		n++;
	} while(n<11);
}

//-------------- FOR LOOP ------------------

int main()
{
	for(int n=1; n<=10; n++)
	{
		printf("%d", n);	
	}
	
}

// -----------  JUMP STATEMENT  ----------

int main()
{
	for(int i=1; i<=10; i++)
	{
		if(i%2 == 0)
		printf("%d", i);
	}
}
