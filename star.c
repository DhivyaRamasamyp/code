#include<stdio.h>
#include<string.h>
void main()
{
  char str[50];
  int d,m;
  printf("Enter the string");
  gets(str);
  d=strlen(str);
  if(d%2==0)
  {
    m=a/2;
    str[m]='*';
    str[m-1]='*';
    puts(str);
     }
      else
     {
       m=d/2;
       str[m]='*';
        puts(str);
     }
}
