#include<stdio.h>
#include<conio.h>

int main(){
    int n,sum=0;
    printf("enter the numbr of terms=");
    scanf("%d",&n);
    printf("the square natural no upto %d terms:",n);
    for(int i=1;i<=n;i++){
    printf("%d ",i*i);
    sum=sum+i*i;
   
    }
     printf("\n");
    printf("sum=%d\n",sum);
    return 0;
}