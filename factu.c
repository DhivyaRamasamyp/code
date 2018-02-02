#include<stdio.h>
void main()
{
int fact=0,n;
printf("\n Enter the num");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("\n %d is factorial of %d",fact,n);
}
