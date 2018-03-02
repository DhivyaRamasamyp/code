#include<stdio.h>
void main()
{
    int a,b,c,i;
    printf("\n enter two numbers");\
    scanf("%d%d",&a,&b);
    c=a*b;
    for(i=1;i<1000;i++)
    {
        if(c==(i*i))
        {
            printf("\n %d is per asquare",c);
        }
    }
}
