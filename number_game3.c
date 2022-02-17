#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int random,guess,attemps_a =1,attemps_b=1;
    srand(time(0));
    random = (rand()%100) + 1; //This generates a random number between 1 to 100.
    printf("Game For Player A: \n");
    do
    {
        printf("Guess The Number: \n");
        scanf("%d", &guess);
        if(guess<random)
            printf("Higher Number Please! \n");
        else if(guess>random)
            printf("Lower Number Please! \n");
        else
            printf("Player A guessed the number %d in %d attemps. \n ",random,attemps_a);
        attemps_a++;
    }while(guess!=random);
    srand(time(0));
    random = (rand()%100) + 1; //This generates a random number between 1 to 100.
    printf("Game For Player B: \n");
    do
    {
        printf("Guess The Number: \n");
        scanf("%d", &guess);
        if(guess<random)
            printf("Higher Number Please! \n");
        else if(guess>random)
            printf("Lower Number Please! \n");
        else
            printf("Player B guessed the number %d in %d attemps. \n ",random,attemps_b);
        attemps_b++;
    }while(guess!=random);
    if(attemps_a>attemps_b)
        printf("Player B is the Winner. \n");
    else if(attemps_a<attemps_b)
        printf("Player A is the Winner. \n");
    else
        printf("Game Tie. \n");
}
