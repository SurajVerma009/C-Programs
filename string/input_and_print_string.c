#include <stdio.h>
#include <conio.h>

int main()
{
    // char st[50];

    // printf("input the string=");
    // scanf("%s",st);
                                                        //  -----------> first method
    // printf("the string you entered is : %s",st);

    // return 0;

    char st[50];
    char *ptr = st;
    printf("input the string=");
    scanf("%s", ptr);
                                                        //  ---------------> second method
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}