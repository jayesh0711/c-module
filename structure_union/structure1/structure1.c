#include<stdio.h>
struct time
{
	int hours;
	int mins;
	int sec;
}s;
int a,b ;
void main()
{
	printf("enter the time in second");
	scanf("%d",&a);
	s.hours=a/3600;
	b=a%3600;
	s.mins=b/60;
	s.sec=b%60;
	printf("time in HH:MM:SS %d hours:%d minute:%d sec",s.hours,s.mins,s.sec);
	
}



