#include<stdio.h>
void main()
{
    int a[10],b[10],n,i,j;
    printf("\n enter the num n");
    scanf("%d",&n);
    printf("\n enter a array");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    printf("\n enter the b array");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        if(a[i]==b[j])
        {
            printf("%d is common",a[i]);
        }
    }
}
}
