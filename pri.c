#include<stdio.h>
void main()
{
int a,i,count==1;
printf("\n enter the nunmber");
scanf("%d",&a);
for(i=2;i<a;i++)
{
if(a%i==0)
count++;
}
if(count==1)
{
printf("\n prime");
}
else
printf("\n not a prime");
}
