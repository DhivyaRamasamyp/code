#include<stdio.h>
#include<string.h>
void swap(int *, int *);
void main()
{
int a,b;
printf("\n enter two number");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("\n after swapping a=%d and b=%d",a,b);
}
void swap(int *x, int *y)
{
*x=*x^*y;
*y=*x^*y;
*x=*x^*y;
}
