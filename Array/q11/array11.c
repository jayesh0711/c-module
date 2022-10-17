#include<stdio.h>
#include<string.h>
void main()
{
	int i,len1 ,len2 ;
	char s1[30]="JAYESH";
	char s2[15]= "MAURYA";
	printf("%d%d",strlen(s1),strlen(s2));
	len1 =strlen(s1);
	len2=strlen(s2);
	for(i=0;i<=len2;i++)
{
	s1[len1+i]=s2[i];
}:wq

        printf("%s",s1);
	}	
