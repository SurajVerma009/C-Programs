#include <stdio.h>
#include <conio.h>

int cube(int a);

int main()
{
    int n;
    printf("enter the number=");
    scanf("%d", &n);

    cube(n);
    printf("the cube of this number is=%d", cube(n));
    return 0;
}

int cube(int a)
{
    int result;
    result = a * a * a;
    return result;
}
