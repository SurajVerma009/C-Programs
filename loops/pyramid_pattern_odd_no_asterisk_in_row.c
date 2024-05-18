#include <stdio.h>
#include <conio.h>

int main()
{
    int row;

    printf("enter the row number=");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = row - i; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}