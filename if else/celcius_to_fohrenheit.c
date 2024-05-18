// fohrenheit = (celcius*9/5)+32

#include<stdio.h>
#include<conio.h>

int main()
{
    float celcius;
    printf("enter the degree of celcius=");
    scanf("%f",&celcius);

    float fohrenheit=(celcius*9/5)+32;

    printf("fohrenheit=%f",fohrenheit);
    return 0;
}