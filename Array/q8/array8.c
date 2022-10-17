#include<stdio.h>
int main()
{
   int array[10],i,position,element;
   for(i=0;i<5;i++)
   {
	   scanf("%d",&array[i]);
   }
   printf("enter the position");
   scanf("%d",&position);
   printf("enter the element");
   scanf("%d",&element);
   for(i=4;i<=position;i--)
   {
	   array[i+1]=array[i];
   }
    array[position]=element;
    for(i=0;i<=5;i++)
{
	printf("%d\n",array[i]);
}
    
}


/*	int array[50], position , c,n,value;
	printf("enter the number of element");
	scanf("%d",&n);
	printf("enter %d element",n);
	for(c=0;c<n;c++);
	scanf("%d",&array[c]);
	printf("enter the location where you want to insert the new number");
		scanf("%d",&position);
	printf("enter the new value");
	scanf("%d", &value);
	for(c=n-1; c>=position-1;c--)
		array[c+1]=array[c];
	array[position -1]=value;
	printf("resultant array is \n");
	for(c=0;c<=n;c++)
		printf("%d\n",array[c]);
	return 0;
}*/
