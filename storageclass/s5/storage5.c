#include<stdio.h>
void main()
{
	register int a=20;
	{
	register int a=40;
	printf("\nregister a=%d",a);
	}
	printf("\n2nd register a=%d",a);
	printf("\nregister is the store in the cpu register is compare to the auto is similar but it is littale bit faster and its life is between the block");
}
