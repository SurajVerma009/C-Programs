#include <stdio.h>
#include <conio.h>

int main()
{
    int row ;

    printf("enter the row no=");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = row - i; j >= 1; j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}