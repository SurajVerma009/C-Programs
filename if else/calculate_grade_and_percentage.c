#include<stdio.h>
#include<conio.h>

int main()
{
    int physics,chemistry,biology,mathmatics,computer;

    printf("enter the physics marks=");
    scanf("%d",&physics);
    printf("enter the chemistry marks=");
    scanf("%d",&chemistry);
    printf("enter the biology marks=");
    scanf("%d",&biology);
    printf("enter the mathmatics marks=");
    scanf("%d",&mathmatics);
    printf("enter the computer marks=");
    scanf("%d",&computer);

    int total_gain_marks,total_no=500;
    total_gain_marks=physics+chemistry+biology+mathmatics+computer;
    float percentage;

    percentage=(total_gain_marks*100)/total_no;
    printf("%f\n",percentage);

    if(percentage>=90)
    {
        printf("your grade is A");
    }
   else if(percentage>=80)
    {
        printf("your grade is B");
    }
    else if(percentage>=70)
    {
        printf("your grade is C");
    }
    else if(percentage>=60)
    {
        printf("your grade is D");
    }
    else if(percentage>=50)
    {
        printf("your grade is E");
    }
    else if(percentage<=40)
    {
        printf("your grade is F");
    }
    return 0;

}