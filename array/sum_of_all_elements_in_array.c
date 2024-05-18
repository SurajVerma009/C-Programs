#include<stdio.h>
#include<conio.h>

int main(){
    int n,sum=0;
    printf("input the number of elements store in array=");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++){
        printf("element-%d=",i+1);
        scanf("%d",&a[i]);
    }

    printf("sum of all elements stored in the array is=");

  for(int i=0;i<n;i++){
    sum=sum+a[i];
  }

  printf("%d\n",sum);
  return 0;
}