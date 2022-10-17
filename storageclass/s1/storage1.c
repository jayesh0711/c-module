#include <stdio.h>
#include "q1header.h"
int a=50;            // Extern varaible
static int b=2;      // Static


void call3()
{
	static int b=7;
	printf("local static b = %d\n",b++);
}
void call()
{
	b++;
	printf("global static variable b = %d\n",b);
	call3();
	call3();
	call3();
}
void call2()
{
	printf("global a = %d\n",a);
}
int main()
{
	register int c=2;
	auto int a=2;
	printf("auto a= %d\n",a);
	printf("register c= %d\n",c);
	{
		register int c=3;
		printf("auto a = %d\n",a);
		printf("register c in block = %d\n",c);
	}
	printf("auto a = %d\n",a);
	printf("register c = %d\n",c);
	printf("global static b = %d\n",b++);
	call();
	call();
	call();
	call2();
	printf("global static variable b retaining value after iteration = %d\n",b);
	calltofileb();
	return 0;
}
