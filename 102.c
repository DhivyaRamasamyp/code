#include <stdio.h>
void main()
{
    int n,rev=0,rem;
    printf("\n enter the num");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=rev+(rem*rem);
        n=n/10;
    }
    printf("%d",rev);
}
