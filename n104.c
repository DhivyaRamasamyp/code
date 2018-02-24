nclude <stdio.h>
void main()
{
    int n,k,c=1;
    printf("\n enter the n and k number");
    scanf("%d%d",&n,&k);
    for(int i=0;i<k;i++)
    {
        c=c*n;
    }
    printf("\n %d",c);
}
