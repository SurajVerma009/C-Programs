#include<stdio.h>
#include<conio.h>

void perfect_number(int n);

int main()
{
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    perfect_number(n);
    return 0;

}
void perfect_number(int n){
     int sum=0;
    for(int i=1;i<n;i++){
       
        if(n%i==0){
        sum=sum+i;
        }
    }
    if(sum==n){
        printf("this is a perfect number");
    }
    else{
        printf("this is not perfect number");
    }

}