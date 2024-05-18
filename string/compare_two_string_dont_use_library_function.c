#include <stdio.h>
#include <conio.h>

int main()
{
   
    int n1,n2;
    printf("enter the first length of string=");
    scanf("%d", &n1);
    printf("enter the second length of string=");
    scanf("%d", &n2);
    if(n1==n2){
    char st1[n1], st2[n2];
    int t = 0;
    printf("enter the first string =");
    scanf("%s", st1);
    printf("enter the second string =");
    scanf("%s", st2);
    for (int i = 0; i < n1; i++)
    {
        if (st1[i] == st2[i])
        {
            t++;
        }
    }
    if (t == n1)
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }
    }
    else{
        printf("length is diffrent so string never equal");
    }
    return 0;
}