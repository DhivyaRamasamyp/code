#include<stdio.h>
void main()
{
int n,m,rev,rem;
printf("\n enter the num");
scanf("%d",&n);
m=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(m==n)
{
printf("\n %d is palindrome",rev);
}
else
{
printf("\n not a palindrome");
}
}
