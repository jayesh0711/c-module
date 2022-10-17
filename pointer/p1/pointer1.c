#include<stdio.h>
 void main()
{ 
	int  x[8] = {10,20,30,40,50,60,70,80};
	printf("%d \n", x);
	printf("%d\n", x+1);
	printf("%d \n",x+2);
	printf("%d\n",*x);
	printf("%d\n",*x+1);
	printf("%d\n",(*x+2));
		printf("%d\n",*(x+2));
		printf("%d",*(x+1));
}
