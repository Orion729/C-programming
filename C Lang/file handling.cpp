#include <stdio.h>

//--------------FILE HANDLING---------------------

main()
{
	FILE *fp;
	char str[50];
	fp=fopen("File1.txt", "w");
	
	if(fp==NULL)
	printf("File open failed");
	
	fgets(str, 20, fp);
	printf("\n file content: %s", str);
	fclose(fp);
}

main()
{
FILE *fp;
fp=fopen("file1.txt","a");

if(fp==NULL)
printf("File open failed");

fputs("welcome", fp);

fclose(fp);
}

main()
{
FILE *fp;
char str[50], str1[50];
fp=fopen("file1.txt","w");
printf("You can write to file:");
gets(str1);
fputs(str1, fp);
fclose(fp);


fp=fopen("file1.txt","r");
fgets(str,50, fp);
printf("\n File content : %s", str);
fclose(fp);

fclose(fp);
}
