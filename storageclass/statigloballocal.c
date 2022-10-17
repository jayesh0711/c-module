#include<stdio.h>
void f1();
void main()
{
	f1();
	f1(); /*printf("%d", i);here static function is limited to the block in which it decleared that why it not print the value of i here.*/
}
 void f1()
{
	static int i;
	i++;
	printf("%d\n",i);//the life of static function  is till the end of the program.

}
