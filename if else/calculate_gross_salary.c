#include<stdio.h>
#include<conio.h>

// basic salary<=10000:HRA=20%,DA=80%
// basic salary<=20000:HRA=25%,DA=90%
// basic salary>20000:HRA=30%,DA=95%



int main()
{
    int basic_salary;
   float hra,da;
    printf("enter the basic sallary=");
    scanf("%d",&basic_salary);

    if(basic_salary<=10000)
    {
      hra=basic_salary*0.2;
      da=basic_salary*0.8;
    }
   else if(basic_salary<=20000)
    {
      hra=basic_salary*0.25;
      da=basic_salary*0.9;
    }
   else if(basic_salary>20000)
    {
      hra=basic_salary*0.3;
      da=basic_salary*0.95;
    }
    float gross_salary;
    gross_salary=basic_salary+hra+da;
    printf("gross salary=%.2f\n",gross_salary);

    return 0;
}