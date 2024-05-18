#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *ptr;
 
    int num, num2;
    ptr = fopen("suraj.txt", "r");
  
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);
    
        fclose(ptr);
        printf("the number is : %d\n", num);
        printf("the number is : %d\n", num2);
        return 0;
    }
