// natural no ---> 1 to infinity exluding zero and negative number

#include<stdio.h>
#include<conio.h>

int main()
{
  int n;
  printf("enter the limit of natural no=");
  scanf("%d",&n);

  for(int i=1;i<=n;i++){
    printf("%d\n",i);
  }
  return 0;
}