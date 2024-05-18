#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d*10=%d\n",i,i*10);
    }
    return 0;
}