#include<stdio.h>
void main()
{
int i,j,p=1,s;
printf("\n enter the value of i);
scanf("%d",&i);
printf("\n enter the value of j");
scanf("%d",&j);
for(s=0;s<j;s++)
{
p=p*i;
}
printf("\n %d is power of \t%d\t%d",i,j,p);
}
