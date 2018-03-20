#include<stdio.h>
#include<string.h>
int main()
{
  char a[100];
  printf("\n enter the string");
  gets("%s",&a);
  strupr(a);
  printf("%s",a);
  return (0);
}
