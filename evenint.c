#include<stdio.h>
void main()
{
int a,b,i;
printf("\n enter the two numbers");
scanf("%d%d",&a,&b);
for(i=a+1;i<b;i++)
{
    if(i%2==0)
    {
        printf("\n %d",i);

    }
}
}
