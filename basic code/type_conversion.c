#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    a=3;
    b=5;
    c=a*b/a+b;  //   --> first evaluate a*b then divided by a then add b
    printf("c=%d\n",c);
    return 0;

}