#include<stdio.h>
void main()
{
int m,hr,min;
printf("enter time in minute");
scanf("%d",&m);
hr=m/60;
min=m%60;
printf("%d:%d",hr,min);
}
