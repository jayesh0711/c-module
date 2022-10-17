#include<stdio.h>
#include<string.h>
void rev();
void rev()
{
   char c;
   scanf("%c",&c);
   if(c!='\n')
   {
     rev();
     printf("%c",c);
   }
}

int main()
{
  printf("enter the character:");
  rev();
  printf("\n");
  return 0;
}
