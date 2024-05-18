#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b);

int main()
{
    int x,y;
    x=4;
    y=5;

    printf("before swapping the value of x=%d and y=%d\n",x,y);
    swap(&x,&y);
    printf("after swapping the value of x=%d and y=%d\n",x,y);

    return 0;
}

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}