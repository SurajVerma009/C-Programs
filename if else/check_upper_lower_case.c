#include<stdio.h>
#include<conio.h>

int main()
{
    char input;
    printf("enter the charector=");
    scanf("%c",&input);
    if(input>=65&&input<=90){
        printf("upper case!");

    }
    else if(input>=97&&input<=122){
        printf("lower case!");
    }
    else{
        printf("this is not alphabet!");

    }
    return 0;
}