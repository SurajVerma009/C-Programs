#include <stdio.h>
#include <conio.h>

int main()
{
    int n1, n2;

    printf("enter the first number=");
    scanf("%d", &n1);

    printf("enter the second number=");
    scanf("%d", &n2);

    if (n1 > n2)
    {

        printf("%d is greater number\n",n1);
    }

    else
    {
        printf("%d is greater number\n",n2);
    }

    return 0;
}