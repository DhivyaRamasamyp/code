#include<stdio.h>
void main()
{
int n,i,a,b;
printf("\n enter the intervals");
scanf("%d%d",&a,&b);
for(i=a+1;i<b;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
{
count++;
}
}
if(count==1)
{
printf(%d",i);
}
}
}
