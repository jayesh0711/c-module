#include<stdio.h>
main()
{
	extern int x ;
	printf("x=%d", x);
	f1();
	printf("x=%d", x);

}
int x ;
void f1()
{
        int j =1;
	x++;
	printf("x=%d",x);
	printf("y=%d", j);


}


