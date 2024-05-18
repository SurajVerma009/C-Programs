#include <stdio.h>
#include <conio.h>

int main()
{
    int n;

    printf("input the number of elements store in array=");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element=", i + 1);
        scanf("%d", &arr1[i]);
    }
    printf("the value store into the first array are=");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("the value copied into the second array are=");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}
