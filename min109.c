
#include<stdio.h>
void main()
{
    int a[10],i,n,min;
    printf("\n enter the numbers");
    scanf("%d",&n);
    printf("\n enter the array values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   min=a[0];
   for(i=0;i<n;i++)
       {
           if(a[i]<min)
           {
               min=a[i];
           }
       }
       printf("max is %d",min);
   }
