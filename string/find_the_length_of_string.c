#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
char st[30];

printf("input the string=");
scanf("%s",st);

int length;
length=strlen(st);
printf("the length of this string is=%d\n",length);

return 0;
}