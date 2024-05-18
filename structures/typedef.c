#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct students{
    int roll_no;
    char name[50];
    float marks;

} std;

int main()
{
    std st[3];
    {
        for(int i=0;i<3;i++){
     printf("enter the %d students roll number=",i+1);
     scanf("%d",&st[i].roll_no);
      printf("enter the %d students name=",i+1);
     scanf("%s",&st[i].name);
      printf("enter the %d students marks=",i+1);
     scanf("%f",&st[i].marks);
    }

    for(int i=0;i<3;i++){
        printf("roll number=%d\n",st[i].roll_no);
         printf("name=%s\n",st[i].name);
          printf("marks=%d\n",st[i].marks);
    }
    }
}