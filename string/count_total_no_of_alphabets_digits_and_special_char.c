#include <stdio.h>
#include <conio.h>

int main()
{
    char st[] = "w3resource";
    int count = 0, flag = 0;
    for(int i=0;st[i];i++)
    {
        if ((st[i] >=65 && st[i] <=90) || (st[i] >=97 && st[i] <=122))
         {
            count++;
         }
         else if(st[i]>=48 && st[i] <=57)
         {
            flag++;
         }
    }
    printf("number of alphabets in the string is=%d\n", count);
    printf("number of digits in the string is=%d\n", flag);
    return 0;
}