#include<stdio.h>
#include<string.h>
char del(char str[],char str2[]);
char del(char str[],char str2[])
{
  int i,j;
  int n=strlen(str);
  int m=strlen(str2);
  for(i=0;i<n;++i)
     {
        for(j=0;j<m;j++)

            if(str[i]==str2[j])
          {
               str[i]=str[i+1];
               for(int k=i+1;k<n;++k)
                str[k]=str[k+1];
          }
     }
}
int main()
{
   char str[]="rain";
   char str2[]="more";
   del(str,str2);
   puts(str);
   puts(str2);
  return 0;
}
