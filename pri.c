#include<stdio.h>
void main()
{
int pri,i,count==1;
printf("\n enter the nunmber");
scanf("%d",&pri);
for(i=2;i<pri;i++)
{
if(pri%i==0)
count++;
}
if(count==1)
{
printf("\n prime");
}
else
printf("\n not a prime");
}
