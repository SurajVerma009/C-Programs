#include<stdio.h>
#include<conio.h>
#include<string.h>


struct employee{
    int code;
    float sallary;
    char name[90];
};

int main()
{
  struct employee e1;
   e1.code=100;
   e1.sallary=345.6;
   strcpy(e1.name,"suraj");

   printf("name=%s\n",e1.name);
   printf("code=%d\n",e1.code);
   printf("sallary=%.3f\n",e1.sallary);
   return 0;

}