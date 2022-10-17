#include<stdio.h>
 void main()
{
	char ch;
	FILE *fp;
	fp=fopen("file.d","r");
	if(fp==NULL)
	{
		printf("file not found");
		exit(1);
	}
	ch=fgetc(fp);
	while(!feof(fp))
	{
		printf("%c",ch);
	        ch=fgetc(fp);
	}
	fclose(fp);
}
