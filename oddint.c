#include<stdio.h>
void main()
{
int a,b,i;
printf("\n enter two numbers");
scanf("%d,%d",&a,&b);
for(i=a;i<b;i++)
{
if(i%2!=0)
{
printf("\n %d is the between numbers",i);
}
}
}
