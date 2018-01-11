#include<stdio.h>
void main()
{
int a,b,temp;
printf("\n enter the two numbers");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("\n %d%d",a,b);
}
