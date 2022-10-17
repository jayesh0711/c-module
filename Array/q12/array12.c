#include<stdio.h>
void main()
{
	int array[5] ,small,large,i;
	for(i=0; i<5;i++)
	{
		scanf("%d", &array[i]);
	}
	small =array[0];
	large =array[0];
	for(i=1;i<5;i++)
	{
		if(array[i]<small)
		{
			small=array[i];
		}
	if(array[i]>large)
	{
		large=array[i];
	}
	}
	printf("large=%d small=%d",small, large);
	
        
       

}
