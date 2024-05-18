// Area of a circle

#include<stdio.h>
#include<conio.h>

int main()
{
    int redius;
    float pi,area_of_circle;

    printf("enter the redius=");
    scanf("%d",&redius);

    pi=3.14;

    area_of_circle=redius*redius*pi;

    printf("area_of_circle=%.2f\n",area_of_circle);

    return 0;
}