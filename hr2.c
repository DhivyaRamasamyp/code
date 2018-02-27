#include<stdio.h>
void main()
{
int m1,m2,hr1,hr2,min1,min2,hr,min;
printf("enter time in minute");
scanf("%d",&m1);
scanf("%d",&m2);
hr1=m1/60;
hr2=m2/60;
min1=m1%60;
min2=m2%60;
hr=hr1-hr2;
min=min1-min2;
printf("%d:%d",hr,min);
}
