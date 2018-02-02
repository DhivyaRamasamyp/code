#include<stdio.h>
void main()
{
int rev=0,rem,in1,i,n,m;
printf("\n Enter the intervals");
scanf("%d",&in1);
for(i=in1+1;i<in2;i++)
{
n=in1;
m=n;
while(n!=0)
{
rem=n%10;
rev=rev+(rem*rem*rem);
n=n/10;
}
if(rev==i)
{
printf("\n %d is armstrong numn ",rev);
}
}
}

© 2018 GitHub, Inc.
