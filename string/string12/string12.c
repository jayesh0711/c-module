#include<stdio.h>
#include<string.h>
char*copy(char*str,char*temp);
char*cat(char*str,char*str1);
int comp(char *str,char*str1);
void main()
{

char str[20];
char temp[20];
char str1[20];
printf("enter the string:");
scanf("%s",str);
printf("\nenter the string:");
scanf("%s",str1);
copy(str,temp);
cat(str,str1);
printf("\ncopied from first string to temp:%s",temp);
printf("\ncat:%s",str);
comp(str,str1);
}
char*copy(char *str,char*temp)
{
  for(int i=0;*(str+i)!='\0';i++)
   {
     *(temp+i)=*(str+i);
   }
  return temp;
}
char*cat(char *str,char *str1)
{
   int i=0;
    while(str[i]!='\0')
     {
         i++;
     }

   int j=0;
      while(str1[j]!='\0')
       {
          str[i]=str1[j];
          i++;
          j++;
       }
   str[i]='\0';
 return str;

}
int comp(char*str,char*str1)
{
  int flag=0;
  int i=0;
  while(str[i]!='\0'&&str1[i]!='\0')
       {
         if(str[i]!=str1[i])
            {
              flag=1;
              break;
            }
         i++;
       }
if(flag==0)
  {
   printf("\nsame");
  }
else
 {
  printf("\nnot same");
 }
return 0;
}
