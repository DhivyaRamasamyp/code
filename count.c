#include <stdio.h>
int main()
{
    int n,count=0;
    printf("\n enter num");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
printf("\n %d",count++);
return 0;
}

