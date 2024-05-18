#include <stdio.h>
#include <conio.h>

float circle_area(int redius, float pi);

int main()
{
    int redius;
    float pi;
    pi = 3.14;

    printf("enter the redius=");
    scanf("%d", &redius);

    circle_area(redius, pi);

    printf("the area of circle is=%.2f\n", circle_area(redius, pi));

    return 0;
}

float circle_area(int redius, float pi)
{
    float result;
    result = pi * redius * redius;
    return result;
}