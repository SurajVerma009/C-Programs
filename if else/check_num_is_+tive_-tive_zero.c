#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("enter the number=");
    scanf("%d",&num);
    if(num>0)
    {
       printf("positive number!"); 
    }
   else if(num<0)
    {
       printf("negative number!"); 
    }
    else{
        printf("this is null!");
    }
    return 0;
}