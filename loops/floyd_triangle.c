#include<stdio.h>
#include<conio.h>

int main()
{
    int row,k,m;
    printf("enter the row number=");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        if (i%2==0){
         k=1;
         m=0;
        }
        else{
            k=0;
            m=1;
        }

        for(int j=1;j<=i;j++){
            if(j%2==0){
                printf("%d",k);
            }
            else{
                printf("%d",m );
            }
        }
        printf("\n");
    }
    return 0;
}