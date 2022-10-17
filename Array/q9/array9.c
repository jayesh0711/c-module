#include<stdio.h>

void delPosition(int *, int, int);

 int main()
{
	int array[5];
	int i, position;

	printf("entr the position = ");
	scanf("%d",&position);	


	printf("Enter the array elements : ");
	for(i=0;i<5;i++)
	{
		scanf("%ds",&array[i]);
	}
	printf("\n");

	delPosition(array, 5, position);   //function call

	return 0;

}

void delPosition(int *arr, int arr_size, int position) 
{
	printf("size of array = %d\n", arr_size);

	for(int i = position; i<(arr_size-1); i++) 
	{
		arr[i] = arr[i+1];
	}
	
	printf("Modified Array[] = ");
	for(int j=0; j<4; j++) 
	{
		printf("%d ",arr[j]);
	}
	printf("\n");
}

