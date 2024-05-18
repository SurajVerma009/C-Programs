#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    a=3;
    b=8;
    int *i=&a;
    int *j=&b;

    if(*i>*j){
        printf("%d number is maximum",a);
    }
    else{
        printf("%d number is maximum",b);
    }
    return 0;
}