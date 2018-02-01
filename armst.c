#include<stdio.h>
void main()
{
int rev=0,rem,in1,i,n;
printf("\n Enter the intervals");
scanf("%d",&in1);
n=in1;
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
