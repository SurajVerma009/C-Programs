#include<stdio.h>
#include<conio.h>

int main()
{
    char x;
     printf("enter the charector=");
    scanf("%c",&x);
    if(x==97||x==101||x==105||x==111||x==117){
        printf("this is a vovel!");
    }
    else{
        printf("this is consonant!");
    }
    return 0;
}