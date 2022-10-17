#include<stdio.h>
int x=66;
void main()
{
	int x=55;
	printf("x=66 but after declare=%d",x);
	fun();
	fun1();
}
void fun()
{
	printf("\nglobal variable calling=%d",x);
}
