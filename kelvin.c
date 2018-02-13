#include<stdio.h>
int main()
{
    float celsius;
    int kelvin;
    printf("\n enter the temperature in celsius");
    scanf("%f",&celsius);
    kelvin=celsius+273.15;
    printf("%f is the temp in kelvin",kelvin);
    return 0;
}
