#include<stdio.h>
#include<conio.h>
int main()
{
    int row,k=1;
    printf("enter the row number=");
    scanf("%d",&row);

    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",k++);
        }
        printf("\n");
    }
    return 0;
}