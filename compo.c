#include<stdio.h>
void main()
{
    int n,i,count;
    printf("\n enter the number");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    
    }
    if(count!=1)
    printf("\n yes");
    else
    printf("\n no");
    
    
}
