#include<stdio.h>
void maain()
{
int a,b,c;
printf("\n enter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if((a<b)&&(a<c))
printf("\n %d is min",a);
elseif((b<c)&&(b<a))
printf("\n %d is min",b);
else
printf("%d is min",c);
}

