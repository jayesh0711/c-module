#include<stdio.h>
int fact(int i);
int main()

{
	float sum=0;
	int i;
	for(i=1;i<7;i++)
	{
		sum=i/(float)fact(i);
	}
	printf("%f",sum);
	return 0;
}
       
	int fact(int i)
	{
		if(i==0||i==1)
	            return 1;
		else
	       return( i*fact(i-1));

	} 
	 

