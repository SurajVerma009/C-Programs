#include<stdio.h>
#include<conio.h>

int find_fact(int *a,int *f);

int main()
{
    int n,fact;
    printf("enter the number=");
    scanf("%d",&n);
    find_fact(&n,&fact);
    printf("factorial=%d\n",fact);
    return 0;
}

int find_fact(int *a,int *f){
    *f=1;
    for(int i=1;i<=*a;i++){
        *f=*f * i;
    }
    return *f;
}
