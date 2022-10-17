#include<stdio.h>
int rotate_right(int n,int b);
int main()
{
	int n,b;
	printf("enter the number to rotate ");
	scanf("%d",&n);
	 printf("enter the position ");
	 scanf("%d",&b);
	 printf("the value %d ,after the right rotation by %d position is %d",n,b,rotate_right(n,b));
}
int rotate_right(int n,int b)
{
	return (n>>b|n<<b);
}



