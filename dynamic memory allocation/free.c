#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int *ptr2;
    int n;
    printf("how many integers you want allocate=");
    scanf("%d",&n);

    ptr=(int *) malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        ptr2=(int *)malloc(6000*sizeof(int));
     printf("enter the %d number=",i+1);
     scanf("%d",&ptr[i]);
     free(ptr2);
    }
     for(int i=0;i<n;i++){
     printf("the %d number=",i+1,ptr[i]);
    }
  return 0;
}