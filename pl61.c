#include<stdio.h>
void main()
{
    int a[100],n,x,c=0,i;
    printf("\n enter the n and x");
    scanf("%d%d",&n,&x);
    printf("array value for n");
    for(i=0;i<2;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=c+a[i];
    }
        if(x==c)
        {
            printf("yes\n");
        }

else
{
    printf("\n no");
}
    
    
}
