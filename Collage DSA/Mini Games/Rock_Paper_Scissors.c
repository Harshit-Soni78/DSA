#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int game = 0;
unsigned int score = 0;

void delay_ms(int milliseconds) {
    struct timespec delay_time;
    delay_time.tv_sec = milliseconds / 1000; 
    delay_time.tv_nsec = (milliseconds % 1000) * 1000000; 
    nanosleep(&delay_time, NULL);
}

char computers_turn()
{
    int number = rand() % 100 + 1;
    if (number < 33)
    {
        return 'r';
    }
    else if (number > 33 && number < 66)
    {
        return 'p';
    }
    else
    {
        return 's';
    }
}

void result_check(char you)
{
    game ++;
    char comp = computers_turn();
    if (you == comp)
    {
        printf("------ Game draw! ------\n");
    }
    else if ((you == 'r' && comp == 's') || (you == 's' && comp == 'p') || (you == 'p' && comp == 'r'))
    {
        printf("+++++ You win! +++++\n");
        score++;
    }
    else
    {
        printf("!!!!! You Lose! !!!!!\n");
    }
    printf("You choose %c and computer choose %c.\n", you, comp);
    printf("\nYour Score :- %d\nComputer Score :- %d\nTotal Game Played :- %d\n", score, game-score , game);
}

int main()
{
    printf("\n********************* Rock-Paper-Scissors! *********************\n");
    while (1)
    {
        delay_ms(300);
        printf("\nEnter 'r' for Rock, 'p' for Paper, 's' for Scissors and 'q' for quit\n");
        char q = getchar();
        while(getchar() != '\n');
        if (q == 'q')
        {
            printf("\n********* Thank You For Playing *********\n\n");
            delay_ms(200);
            printf("\nYour Score :- %d\nComputer Score :- %d\nTotal Game Played :- %d\n", score, game-score , game);
            system("pause");
            break;
        }
        else if (q == 's' || q == 'r' || q == 'p')
        {
            delay_ms(200);
            result_check(q);
        }
        else
        {
            printf("\n****** Please choose valid option ******\n");
        }
    }
    return 0;
}
