#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("how many integers you want allocate=");
    scanf("%d",&n);

    ptr=(int *) malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        printf("enter the %d element =",i+1);
        scanf("%d",&ptr[i]);
    }
     for(int i=0;i<n;i++){
        printf(" the %d element is =%d\n",i+1,ptr[i]);   
    }
    return 0;
}