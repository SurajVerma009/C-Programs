#include <stdio.h>
#include <conio.h>

int sum_avg(int x, int y, int *sum, float *avg);

int main()
{
    int a, b, sum;
    a = 3;
    b = 14;
    float avg;

    sum_avg(a, b, &sum, &avg);

    printf("sum=%d\n avg=%.2f\n", sum, avg);

    return 0;
}

int sum_avg(int x, int y, int *sum, float *avg)
{
    *sum = x + y;
    *avg = (float)*sum / 2;

    return *sum, *avg;
}