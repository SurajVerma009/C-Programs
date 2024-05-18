#include<stdio.h>
#include<conio.h>

void max_min(int a,int b);

int main()
{
    int n1,n2;
    printf("enter the first number=");
    scanf("%d",&n1);
    printf("enter the second number=");
    scanf("%d",&n2);
     max_min(n1,n2);
     return 0;
     
}

void max_min(int a,int b){

    if(a>b){
        printf("%d number is maximum number\n",a);
        printf("%d number is minimum number\n",b);
    }
   else if(a<b){
        printf("%d number is maximum number\n",b);
        printf("%d number is minimum number\n",a);
    }
    else{
        printf("%d and %d both are equal number",a,b);
    }

}