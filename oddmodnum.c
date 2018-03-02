#include<stdio.h>
void main()
{
    int n,c,rem;
    printf("\n enter th number");
    scanf("%d",&n);
    while(n!=0)
    {
      rem=n%10;
      c=(rem%2);

    if(c!=0)
    {
      printf("%d",rem);
  }
      n=n/10;
    
    }
}
