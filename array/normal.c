#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter the %d element=", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("elements in array are=");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    
    }
    return 0;
}