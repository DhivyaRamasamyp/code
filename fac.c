#include<stdio.h>
void main()
{
int a,fact=1,i;
printf("\n enter the number");
scanf("%d",&a);
for(i=1;i<a;i++)
{
fact=fact*i;
}
printf("\n %d is fact of num",fact);
}
