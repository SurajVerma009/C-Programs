#include <stdio.h>
#include <conio.h>

int main()
{
    int n, fact = 1;
    printf("enter the number=");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d number factorial is =%d\n", n, fact);
    return 0;
}