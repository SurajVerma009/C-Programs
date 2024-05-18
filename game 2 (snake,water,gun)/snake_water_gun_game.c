#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int snake_water_gun(char you, char computer);

int main()
{
    int number;
    srand(time(0));
    number = rand() % 100 + 1;

    char you, computer;

    if (number < 33)
    {
        computer = 's';
    }
    else if (number >= 33 && number <= 66)
    {
        computer = 'w';
    }
    else
    {
        computer = 'g';
    }

    printf("enter the charector s for snake w for water and g for gun=");
    scanf("%c", &you);

    int result = snake_water_gun(you, computer);
    printf("you choose %c and computer choose %c\n", you, computer);
    if (result == 0)
    {
        printf("GAME DRAWN!");
    }
    else if (result == 1)
    {
        printf("YOU ARE WINNER\n");
    }
    else
    {
        printf("YOU ARE LOOSER\n");
    }
}
int snake_water_gun(char you, char computer)
{

    // 0---->game draw
    // 1---->you win
    //(-1)--->you lose

    if (you == computer)
    {
        return 0;
    }
    if (you == 's' && computer == 'w')
    {
        return 1;
    }
    else if (you == 'w' && computer == 's')
    {
        return -1;
    }
    if (you == 's' && computer == 'g')
    {
        return -1;
    }
    else if (you == 'g' && computer == 's')
    {
        return 1;
    }
    if (you == 'g' && computer == 'w')
    {
        return -1;
    }
    else if (you == 'w' && computer == 'g')
    {
        return 1;
    }
}