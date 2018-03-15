#include<stdio.h>
void main()
{
    int n,k,i,a[100],count=0;
    printf("\n enter the number n and k");
    scanf("%d%d",&n,&k);
    printf("enter the value of n numbers ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("%d yes",a[i]);
            count++;
            break;
        }
    }
        if(count==0)
        {
            printf("\n no");
        }


}
