#include<stdio.h>
#include<conio.h>

int main()
{
    int a1,a2,a3;
    printf("enter the first angle=");
    scanf("%d",&a1);
    printf("enter the second angle=");
    scanf("%d",&a2);
    printf("enter the third angle=");
    scanf("%d",&a3);
    int sum;
    sum=a1+a2+a3;
    if(sum==180){

     if((a1==a2)&&(a1==a3))
    {
        printf("this is a equilateral triangle");
    }
    else if(((a1==a2)&&(a1!=a3))||((a1==a3)&&(a1!=a2))||((a2==a3)&&(a2!=a1)))
    {
        printf("this is a isosceles triangle");
    }
    else if(a1!=a2!=a3)
    {
        printf("this is a scalene triangle");
    }
    }
    else{
        printf("this is not valid triangle");
    }
    return 0;
    
    
}