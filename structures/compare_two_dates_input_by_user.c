#include <stdio.h>
#include <conio.h>
struct user
{
    int day;
    int month;
    int year;
};
int main()
{
    struct user info[2];
    {
        for (int i = 0; i < 2; i++)
        {
            printf("%d USER INPUT\n", i + 1);
            printf("enter the day=");
            scanf("%d", &info[i].day);
            printf("enter the month=");
            scanf("%d", &info[i].month);
            printf("enter the year=");
            scanf("%d", &info[i].year);
        }

        if ((info[0].day == info[1].day) && (info[0].month == info[1].month) && (info[0].year == info[1].year))
        {

            printf("DATES ARE EQUAL");
        }
        else
        {
            printf("DATES ARE NOT EQUAL");
        }
    }
    return 0;
}