#include<stdio.h>
#include<conio.h>
#include<string.h>

struct students{
   int roll_no;
   char name[89];
   float marks;

};

int main()
{

    struct students std[3];
    {
     for(int i=0;i<3;i++){
        printf("enter the %d students roll number=",i+1);
        scanf("%d",&std[i].roll_no);
         printf("enter the %d students name=",i+1);
        scanf("%s",&std[i].name);
         printf("enter the %d students marks=",i+1);
        scanf("%f",&std[i].marks);
     }

     for(int i=0;i<3;i++){
        printf("roll number=%d\n",std[i].roll_no);
        printf("name=%s\n",std[i].name);
        printf("marks=%f\n",std[i].marks);
     }
     
    }
    return 0;
}