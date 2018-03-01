#include<stdio.h>
void main()
{
    int a[10],i,n,max;
    printf("\n enter the numbers");
    scanf("%d",&n);
    printf("\n enter the array values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   max=a[0];
   for(i=0;i<n;i++)
       {
           if(a[i]>max)
           {
               max=a[i];
           }
       }
       printf("max is %d",max);
   }
