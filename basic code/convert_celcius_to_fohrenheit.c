// convert celcius to fohrenheit

#include<stdio.h>
#include<conio.h>

int main()
{
    int celcius;
    float fohrenheit;

    printf("enter the celcius value=");
    scanf("%d",&celcius);

    fohrenheit=celcius*9/5+32;

    printf("fohrenheit=%f\n",fohrenheit);
    return 0;
    
}