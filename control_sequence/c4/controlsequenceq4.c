#include<stdio.h>
 int main()
  {
	  int count=1 ,fact=1,num;
	  printf("enter the number");
	  scanf("%d",&num);
	  for(count ; count<=num; count++)
	  {
		  fact=fact*count;
	  }
	  printf("the factorial of number is %d " , fact);
	  return 0;
  }


