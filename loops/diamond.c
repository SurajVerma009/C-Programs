#include<stdio.h>
#include<conio.h>

int main(){
    int row;
    printf("enter the row number (half diomond shape)=");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        for(int j=row-i;j>=1;j--){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int p=row-1;p>=1;p--){
        for(int q=1;q<=row-p;q++){
            printf(" ");
        }
        for(int r=1;r<=2*p-1;r++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

