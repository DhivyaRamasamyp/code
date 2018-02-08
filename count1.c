#include<stdio.h>
void main()
{
int a,c=0;
printf("\n enter th num");
scanf("%d",&a);
while(a!=0)
{
    a=a/10;
    c++;
}

printf("%d",c);
}
