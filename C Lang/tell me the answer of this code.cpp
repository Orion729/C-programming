#include <stdio.h>
int i=1;

int main()
{

printf("Hello %d", i);

i++;

if(i<=10)
main();

printf("\nBye %d", i--);
}
