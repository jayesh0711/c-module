#include<stdio.h>
#include<string.h>
#define MAXLEN 100
void fun(int n,char s[])
{
  static int i;
	if(n/10)
	fun(n/10,s);
	else
	{
		i=0;
		if(n<0)
		s[i++]='-';
	}
	s[i++]=abs(n)%10+'0';
	s[i]='\0';
}
void main()
{
	int n;
	char s[MAXLEN];
	n=1234;
	fun(n,s);
	printf("%s",s);
}
