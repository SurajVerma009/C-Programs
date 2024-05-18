#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("enter the month number=");
    scanf("%d",&num);
    switch(num){
        case 1:
        printf("31 days in this month");
        break;
         case 2:
        printf("28 days in this month");
        break;
         case 3:
        printf("31 days in this month");
        break;
         case 4:
        printf("30 days in this month");
        break;
         case 5:
        printf("31 days in this month");
        break;
         case 6:
        printf("30 days in this month");
        break;
         case 7:
        printf("31 days in this month");
        break;
         case 8:
        printf("31 days in this month");
        break;
         case 9:
        printf("30 days in this month");
        break;
         case 10:
        printf("31 days in this month");
        break;
         case 11:
        printf("30 days in this month");
        break;
         case 12:
        printf("31 days in this month");
        break;
        default:
        printf("errror!");

    }
    return 0;
}