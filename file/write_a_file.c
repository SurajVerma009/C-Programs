#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr=fopen("suraj.txt","w");

    fprintf(ptr,"96 82",num);
    fclose(ptr);
    return 0;
}