#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    a=2;
    b=3;
    int *x=&a;
    int *y=&b;

    int sum;
    sum=*x+*y;
    printf("sum=%d\n",sum);
    return 0;

}