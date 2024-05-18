#include<stdio.h>
#include<conio.h>

int main()
{
    char st[]="surajseth";

char *ptr=st;

while(*ptr!='\0'){
    printf("%c\t",*ptr);
    ptr++;
}
    return 0;
}