#include<stdio.h>
#include<conio.h>

int main()
{
    int a1,a2,a3;
    printf("enter the first angle of triangle=");
    scanf("%d",&a1);
    printf("enter the second angle of triangle=");
    scanf("%d",&a2);
    printf("enter the third angle of triangle=");
    scanf("%d",&a3);
    int sum=a1+a2+a3;
    if(sum==180){
        printf("valid triangle");
    }
    else{
        printf("not valid!");
    }
    return 0;
}