#include<stdio.h>
void main()
{
    int n,k,i,a[100],count=0;
    printf("\n rnter the n and k num");
    scanf("%d%d",&n,&k);
    printf("\n enter the array values of n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }  
    for(i=0;i<n;i++)
    {
    if(a[i]%2!=0)
        {
            count++;
            if(count==1)
            
            {
                printf("%d",a[i]);
            }
    }
}
}
    

