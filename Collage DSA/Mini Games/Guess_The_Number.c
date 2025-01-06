#include <stdio.h>
#include <stdlib.h>

void guess_no()
{
    int number, guess, nguesses = 1;
    number = rand() % 100 + 1;
    printf("Guess the number between 1 to 100\n");
    do
    {
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess != number);
}

int main()
{
    printf("\n********************* Guess The Number! *********************\n");
    int q = 1;
    while (1)
    {
        if (q == 0)
        {
            printf("\n********* Thank You For Playing *********\n\n");
            system("pause");
            break;
        }
        else if (q == 1)
        {
            guess_no();
        }
        else
        {
            printf("\n****** Please choose valid option ******\n");
        }
        printf("\nEnter '1' for Play Again and '0' for Quit\n");
        scanf("%d", &q);
    }
    return 0;
}