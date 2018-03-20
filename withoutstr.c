#include<stdio.h>
#include<string.h>
int main()
{
  int count=0,i;
  char a[100];
  printf("\n enter the string");
  scanf("%s",&a);
  for(i=0;a[i]!='\0';i++)
  {
    count++;
  }
  printf("\n%d",count);
}
