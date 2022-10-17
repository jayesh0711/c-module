#include<stdio.h>
struct date
{
	int a:6;
	int b:4;
	int c:6;
};
void main()
{
   struct date v={3,5,7};                          // this bit field is lrge enough to accomadate the value
   printf("size of the v is %d",sizeof(v));
}

