#include<stdio.h>
void main()
{
int f1=0,f2=1,f3,a,i;
printf("\n enter the number");
scanf("%d",&a);
printf("\n %d\t%d",f1,f2);
for(i=2;i<n;i++)
{
f3=f1+f2;
f1=f2;
f2=f1;
printf("\t%d",f3);
}
}
