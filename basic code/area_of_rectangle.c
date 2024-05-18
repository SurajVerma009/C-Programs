// area of rectangle=width*length

#include<stdio.h>
#include<conio.h>

int main()
{
    int w,l;
    printf("enter the width=");
    scanf("%d",&w);

    printf("enter the length=");
    scanf("%d",&l);

    int r;
    r=w*l;
    printf("area of rectangle is=%d\n",r);
    return 0;
}