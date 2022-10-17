#include<stdio.h>
int main()
{
	int d1,d2,m1,m2,y1,y2;
	printf("Enter first date");
	scanf("%d/%d/%d",&d1,&m1,&y1);
	printf("Enter second date");
	scanf("%d/%d/%d",&d2,&m2,&y2);
	int d = (d1>d2)?(d1-d2):(d2-d1);
	int m = (m1>m2)?(m1-m2):(m2-m1);
	int y = (y1>y2)?(y1-y2):(y2-y1);
	float diff = (365*y)+((float)0.25*y)-((float)0.01*y)+((float)0.0025*y)+d+((float)(153*m+8)/5);
	printf("Difference = %f",diff);
	return 0;
}
