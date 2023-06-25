#include<stdio.h>
main()
{
FILE *fptr;
char name[10];
int sal;
//Writing
fptr=fopen("content.txt","w");

printf("Enter the details:");
for(int i=0; i<2; i++)
{
scanf("%s%d",name,&sal);
fprintf(fptr,"%s\n%d\n",name,sal);
}
fclose(fptr);

//reading
fptr=fopen("content.txt","r");
fscanf(fptr,"%s%d",name,&sal);
while(!feof(fptr))
{
printf("\n%s %d",name,sal);
fscanf(fptr,"%s%d",name,&sal);
}
fclose(fptr);

}

10:27 AM
#include<stdio.h>
#include<conio.h>
struct emp
{
char name[40] ;
int age ;
float bs ;
} ;

main( )
{
FILE *fp ;
char another = 'Y' ;
struct emp e ;

fp = fopen ( "EMP.txt", "w" ) ;

while ( another == 'Y' )
{
printf ( "\nEnter name, age and basic salary: " ) ;
scanf ( "%s %d %f", e.name, &e.age, &e.bs ) ;
fwrite ( &e, sizeof ( e ), 1, fp ) ;
printf ( "Add another record (Y/N) " ) ;
fflush ( stdin ) ;
another = getche() ;
}
fclose ( fp ) ;
}
