#include<stdio.h>
void main()
{
	int t=0,n=0,s=0,al=0;
	char a[50];
	printf("Enter a string with alphabets digits and spaces: ");
	scanf("%[^\n]s",a);
	for(int i=0;a[i];i++)
	{
		if(a[i] == 9)
			t++;
		else if(a[i] == 32)
			s++;
		else if((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
			al++;
		else if(a[i] >= '0' && a[i] <= '9')
			n++;
	}
	printf("\nNo. of alphabet = %d",al);
	printf("\nNo. of digits = %d",n);
	printf("\nNo. of space = %d",s);
	printf("\nNo. of tabs = %d",t);
}

