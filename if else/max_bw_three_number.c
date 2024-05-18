#include <stdio.h>
#include <conio.h>

int main()
{
    int n1, n2, n3;
    printf("enter the first number=");
    scanf("%d", &n1);
    printf("enter the second number=");
    scanf("%d", &n2);
    printf("enter the third number=");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("%d number is greater\n", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("%d number is greater\n", n2);
    }
    else
    {
        printf("%d number is greater\n", n3);
    }
    return 0;
}