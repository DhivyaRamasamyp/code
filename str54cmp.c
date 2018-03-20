#include<stdio.h>
#include<string.h>
int main()
{
  int j,i,count=0;
  char a[100],b[100];
  printf("\n enter the string");
  scanf("%s%s",&a,&b);
  for(i=0;a[i]!='\0';i++)
  {
    for(j=0;b[j]!='\0';j++)
    {
      if(a[i]==b[j])
      {
        count++;
      }
    }
  }
  if(count!=0)
  {
    printf("\n equal");
  }
  else
  {
    printf("\n not equal");
  }
}
