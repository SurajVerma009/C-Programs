
// prime number----> when the number is divided 1 and itself then he call a prime number


#include<stdio.h>
#include<conio.h>

int main()
{
    int n,count=0;
    printf("enter the number=");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
   if(n%i==0){
    count++;
   }
    }
    if(count==2){
        printf("this is a prime number");
    }
    else{
        printf("this is not a prime number");
    }
    return 0;
}