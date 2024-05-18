#include<stdio.h>
#include<conio.h>

int main()
{
    int redius,height;
    float pi,volume_of_cylinder;

    printf("enter the redius value=");
    scanf("%d",&redius);

    printf("enter the height=");
    scanf("%d",&height);

    pi=3.14;

    volume_of_cylinder=pi*redius*redius*height;

    printf("volume_of_cylinder=%f\n",volume_of_cylinder);
    return 0;
}