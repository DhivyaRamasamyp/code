
#include<stdio.h>
void main()
{
    int i,n,sum=0,arr[100];
    printf("\n enter the number");
    scanf("%d",&n);
    printf("\n enter the array values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
            if(arr[i]>arr[i+1])
            {
              sum=sum+arr[i];  
            }
            else
            sum=sum+arr[i+1];
        }
        
    printf("\n %d",sum);
}
