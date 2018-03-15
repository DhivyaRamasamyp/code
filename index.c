#include<stdio.h>
void main()
{
    int n,i,c,a[100];
    printf("\n enter the number");
    scanf("%d",&n);
    printf("\n enter the array values of n numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    c=0;
    for(i=0;i<n;i++)
    {
        printf("%d\t%d\n",a[i],c);
        c++;
    }
}
