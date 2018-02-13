#include<stdio.h>
int main()
{
    int n,m,rev=1,rem;
    printf("\n enter the num");
    scanf("%d",&n);
    m=n;
    while(m!=0)
    {
        rem=m%10;                                 
        rev=rev*rem;
        m=m/10;
    }
        printf("%d",rev);
    return 0;
}
