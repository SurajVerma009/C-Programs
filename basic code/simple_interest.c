// simple interest

#include<stdio.h>
#include<conio.h>

int main()
{
    int ammount,rate,time;

    printf("enter the ammount=");
    scanf("%d",&ammount);

    printf("enter the rate=");
    scanf("%d",&rate);

    printf("enter the time=");
    scanf("%d",&time);

    int simple_interest;

    simple_interest=(ammount*rate*time)/100;

    printf("simple_interest=%d\n",simple_interest);

    return 0;
}