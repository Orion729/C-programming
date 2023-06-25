#include<stdio.h>

int main()
{
	char ch;
	ch='A';

	printf("\n char = %c",ch);
	printf("\n ASCII = %d",ch);
	printf("\n Size = %d",sizeof(ch));
	printf("\n Address = %d", &ch);
	printf("\n Size of %c = %d",ch,sizeof(ch));

	printf("\n ASCII = %d",'e');
	printf("\n char = %c",118);

}
