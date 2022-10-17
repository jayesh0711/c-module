#include<stdio.h>
#include<stdlib.h>
main()
{
   int a=10,b=20;
   asm{
	   mov ax,a
           mov bx,b
	   add ax,bx
	   mov a,ax
   }
   printf("c=%d",c);
}


