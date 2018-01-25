#include<stdio.h>
void main()
{
int s,i,cnt=0;
scanf("%d",&s);
for(i=2;i<=s;i++)
{
if(s%i==0)
cnt++;
}
if(cnt!=1)
printf("composite number");
else
printf("Not composite");
}
