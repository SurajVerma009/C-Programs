#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("input the number of elements store in array=");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element=", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("the value store into the array are=");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("the value store into the array in reverse order=");

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
