#include<stdio.h>
#include<conio.h>

void pattern(int row);

int main()
{
    int row;
    printf("enter the row number=");
    scanf("%d",&row);
    pattern(row);
    return 0;

}

void pattern(int row){
    for(int i=1;i<=row;i++){
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
        
    }
}