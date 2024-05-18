#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char st[60];
    char st2[60];
    printf("input the first string=");
    scanf("%s",st);
    
    strcpy(st2,st);

    printf("the first string is:%s\n",st);
    printf("the second string is:%s\n",st2);

    return 0;

}