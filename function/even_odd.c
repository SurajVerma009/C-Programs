#include <stdio.h>
#include <conio.h>

void even_odd(int n);

int main()
{
    int n;
    printf("enter the number=");
    scanf("%d", &n);

    even_odd(n);

    return 0;
}

void even_odd(int n)
{
    if (n % 2 == 0)
    {
        printf("%d number is even number", n);
    }
    else
    {
        printf("%d number is odd number", n);
    }
}