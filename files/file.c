#include<stdio.h>
int main()
{
	int i;
	FILE *fp;
	char s[]="hello students";
	fp=fopen("file.d","w");
	if(fp==NULL)
	{
		printf("file cannot exist");
		exit(1);
	}
	for (i=0;i<strlen(s);i++)
	{
		fputc(s[i],fp);
	}       
       	fclose(fp);
}
