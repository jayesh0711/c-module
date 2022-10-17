 #include<stdio.h>
 int main()
{
	int sum=0, r, n,temp ;
	printf("enter the number");
		scanf("%d", &n);
		temp=n;
	while(n >0)
	{
	r=n%10;
	sum=sum+(r*r*r);		
	n=n/10;
	}

	if(sum==temp)	
	printf("number is armstrong number");
	else	
	printf("the number is not armstrong number");	
	return 0;
}


