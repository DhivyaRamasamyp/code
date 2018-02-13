
#include<stdio.h>
int main()
{
    int n,rem,m,rev=0;
    printf("\n enter the num");
    scanf("%d",&n);
    m=n;
    while(m!=0)
    {
        rem=m%10;
        rev=rev*10+rem;
        m=m/10;
    }
        printf("%d",rev);
    return 0;
}
