#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    float *ptr;

    ptr=(float *) calloc(6, sizeof(float));

    for(int i=0;i<6;i++){
        printf("enter the %d decimal number=",i+1);
        scanf("%f",&ptr[i]);
    }
     for(int i=0;i<6;i++){
        printf("the %d decimal number is=%.2f\n",i+1,ptr[i]);
    }
    return 0;
}