#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
     printf("enter the number=");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d number is even\n",n);

    }
    else{
        printf("%d number is odd\n",n);
    }
    return 0;
}