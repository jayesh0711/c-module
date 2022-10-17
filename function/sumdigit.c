#include<stdio.h>
 int main()
{ 
	int sum=0,n, r;
	printf(" Enter the number");
	scanf("%d", &n);
         while(n!=0)
	{
		r=n%10;
		sum=sum+r ;
		n=n/10 ;
	}
	 printf("sum of digit is %d", sum);
	 return 0 ;
}

