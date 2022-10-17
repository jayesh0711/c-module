#include<stdio.h>
#include<ctype.h>
 void main()
{
	char c;
	printf("enter the uppercase alphabat");
	scanf("%c",&c);
	(c>='A'&& c<='Z')?printf(" the lower case of alphabet is%c" ,tolower(c)):printf("the character you entered is not uppercase is %c",toupper(c));
}

