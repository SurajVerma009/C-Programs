        // perfect no -----> sum of divisor(exluding the given number)=given number then it is perfect number

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,sum=0;
    printf("enter the number=");
    scanf("%d",&n);
    printf("the positive divisior:");
    for(int i=1;i<n;i++){
        if (n%i==0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("sum=%d\n",sum);
    if(sum==n){
        printf("this is a perfect no\n ");
    }
    else{
        printf("this is not perfect no\n ");
    }
    return 0;
}