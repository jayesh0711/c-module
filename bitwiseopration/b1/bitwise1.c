#include<stdio.h>
void main()
{
	int number,count=0,remainder;
	printf("enter the number");
       scanf("%d",&number);
        while(number!=0)
	{
	remainder=number%2;
        if(remainder==1)	
		count++;
	number=number/2;
	}
/*	if(number==1)
	{ 
		count++;
	}
	}*/
	printf("number in bit %d",count);
}
