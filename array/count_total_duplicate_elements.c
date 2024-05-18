#include<stdio.h>
#include<conio.h>

int main()
{
    int a[5],count=0;
    for(int i=0;i<5;i++){
     printf("enter the %d element=",i+1);
     scanf("%d",&a[i]);
    }
   
     
     for(int i=0;i<5;i++){
      for(int j=i+1;j<5;j++){
        if(a[i]==a[j]){
            count++;
        }
      }
     }
     if(count>0){
    printf("total number of duplicate elements found in array is=%d",count);
     }
     else{
      printf("No duplicate elements in array");
     }
    return 0;
}

