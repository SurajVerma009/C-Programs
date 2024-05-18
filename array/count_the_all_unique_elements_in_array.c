#include<stdio.h>
#include<conio.h>

int main()
{
    int a[4],i,j,count=1,unique=0;
    
    for(int i=0;i<4;i++){

        printf("enter the element-%d=",i+1);
        scanf("%d",&a[i]);
    }
    for( i=0;i<4;i++){
        for(j=0;j<4;j++){
        if(a[i]==a[j]&& i!=j){
         break;
        }
      
        }
        if(j==4){
        ++unique;
    }
    }
    

   
    printf("total number of unique element in array are=%d\n",unique);
    return 0;
}