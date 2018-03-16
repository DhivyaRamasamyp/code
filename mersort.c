#include <stdio.h>

void main()
{
    int a[100],i,j,n,tem;
    printf("\n enter the num");
    scanf("%d",&n );
    printf("\n enter the value of num");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
            for(i=0;i<n;i++)
     {       
                printf("%d",a[i]);
            }

    }
