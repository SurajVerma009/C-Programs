#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int *ptr;

    ptr=(int *) malloc(5*sizeof(int));

    for(int i=0;i<5;i++){
        printf("enter the %d element =",i+1);
        scanf("%d",&ptr[i]);
    }
     for(int i=0;i<5;i++){
        printf(" the %d element is =%d\n",i+1,ptr[i]);   
    }
    return 0;
}