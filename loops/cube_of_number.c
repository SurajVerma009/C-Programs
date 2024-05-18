#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n,i,cube;
    printf("enter the number of term=");
    scanf("%d",&n);
    // for( i=1;i<=n;i++){
       
    //  cube=i*i*i;
  
    // }
    //    printf("%d\n",cube);   

     printf("%d number cube =%.1f\n",n,pow(n,3));

   
    return 0;
}