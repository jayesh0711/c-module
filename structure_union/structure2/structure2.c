#include<stdio.h>
struct data
{
	int x ;
	char b[20];
}d1;
union datas
{
	int y;
	char c[20];
}d2;
void main()
{
	printf("size of strucure is %ld ", sizeof(d1));
	 printf("size of union is %ld ", sizeof(d2));
}

