#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("enter the number=");
    scanf("%d",&num);
    if(num%5==0&&num%11==0){
        printf("the number is divisible\n");

    }
    else{
        printf("this number is not divisible");
    }
    return 0;
}