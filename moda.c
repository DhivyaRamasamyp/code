#include<stdio.h>
int main()
{
    int a,b,c,tot;
    printf("enter the values");
    scanf("%d%d%d",&a,&b,&c);
    tot=(a*b)%c;
    printf("%d",tot);
    return 0;
}
