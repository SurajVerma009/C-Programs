#include<stdio.h>
#include<string.h>

int main()
{
    char name;
    int code;
    float sallary;
    char s[10];

    printf("Enter your name :  ");
    scanf("%c",&name);

    printf("Enter the code of company :  ");
    scanf("%d",&code);

    printf("Enter sallary :  ");
    scanf("%f",&sallary);
    printf("enter address :");
    for(int i=0;i<10;i++)
    {
        scanf("%c",&s[i]);
    }

    printf("Showing information of yours \n");
    printf("*********************************\n");

    printf("Your name : %c\n ",name);

    printf("Your company code : %d\n ",code);

    printf("Your sallery : %f\n ",sallary);

    return 0;

}