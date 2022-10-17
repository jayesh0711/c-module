#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character ");
	scanf("%c", &ch);
	switch(ch)
	{
		case'a':printf(" A for APPlE");
			break;
		case'A':printf(" A for APPlE");
                        break;

		case'b':printf("B for BALL");
			break;
		case'B':printf("B for BALL");
                        break;
		case 'C':printf("C for CAT");
			 break;
		case'd':printf("D for DOG");
			break;
		case'D':printf("d for DOG");
                        break;

		default: printf(" character is not in these range");
			 break;
	}
}
