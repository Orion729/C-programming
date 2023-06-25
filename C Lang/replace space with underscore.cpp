// --------- REPLACE SPACES WITH UNDERSCORE ---------
#include<stdio.h>
main()
{
FILE *fp;
char ch;

fp=fopen("KOC.txt","r+");



while(!feof(fp))
{
ch=fgetc(fp);

if(ch==' ')
{
fseek(fp, -1,1);
fputc('_', fp);
}
}

fclose(fp);


}
