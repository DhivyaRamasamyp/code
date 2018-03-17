#include<stdio.h>
void main()
{
    int n,rem,dig=0;
    printf("\n enter the num n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        dig=(rem*rem)+dig;
        n=n/10;
        
    }
    printf("%d",dig);
}
