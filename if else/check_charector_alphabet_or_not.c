#include<stdio.h>
#include<conio.h>

int main()
{
    char x;
    printf("enter the charector=");
    scanf("%c",&x);
    if((x>=65&&x<=90)||(x>=97&&x<=122))
    {
        printf("this is a alphabet!");
    } 
    else{
         printf("this is not  alphabet!");
    }
    return 0;
}