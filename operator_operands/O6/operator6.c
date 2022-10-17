#include <stdio.h>
int endian(char* n,int s)
{
	for(int i=0;i<s;i++)
		printf(" %.x",n[i]);
	printf("\n");
}
int main()
{
	int num = 0x1234;// It prints 34 12 which means it is big endian
	endian((char*)&num,sizeof(num));
	return 0;
}
