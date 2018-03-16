#include <stdio.h>
int main() 
{	
   int n,m,i;
   char b;
   for(i=0;i<4;i++)
   {
       scanf("%d %c %d",&n,&b,&m);
       if(i%2==0)
       {
           printf("%d\n",(n/m));
       }
       else
       {
           printf("%d\n",(n%m));
       }
   }

}
