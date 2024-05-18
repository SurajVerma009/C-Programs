#include<stdio.h>
#include<conio.h>

int sum(int a,int b);

int main(){
    int a,b;
    sum(2,6);
    printf("sum =%d\n",sum(2,6));
    return 0;
}

int sum(int a,int b){
    int result;
    result=a+b;
    return result;
}
