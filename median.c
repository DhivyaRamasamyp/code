#include<stdio.h>
void main()
{
    int n,i,a[100],sum=0,median;
    printf("\n enter the number ");
    scanf("%d",&n);
    printf("\n enter the array value of n");
    for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
median=sum/n;
printf("\n%d",median);
}
