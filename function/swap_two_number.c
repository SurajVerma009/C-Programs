#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b);

int main()
{
    int a,b;
    a=4;
    b=5;
     printf("before swapping a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("after swapping a=%d and b=%d\n",a,b);
    return 0;
}

void swap(int *a,int *b){
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
    
}


