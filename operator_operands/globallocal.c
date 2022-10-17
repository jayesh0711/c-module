#include<stdio.h>
main()
{
	int i=12;
	{
		int i=10 ;
		printf("%d", i);// here i is local variable
	}
	printf("%d", i);// here i is global variable
}
