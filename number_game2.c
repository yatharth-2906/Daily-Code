#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int random,guess,level,attemps =1;
    printf("Level 1: Guess The Number Between 1 to 100. \n");
    printf("Level 2: Guess The Number Between 1 to 1,000. \n");
    printf("Level 1: Guess The Number Between 1 to 10,000. \n");
    printf("Enter The Level Of Your Choice: ");
    scanf("%d", &level);
    if(level==1)
    {
        srand(time(0));
    random = (rand()%100) + 1; //This generates a random number between 1 to 100.
    }
    else if(level==2)
    {
        srand(time(0));
    random = (rand()%1000) + 1; //This generates a random number between 1 to 1,000.
    }
    else if(level==3)
    {
        srand(time(0));
    random = (rand()%10000) + 1; //This generates a random number between 1 to 10,000.
    }
    else
    {
        printf("Invalid Level. \n");
    }
    if(level==1 || level==2 ||level==3)
    {

    do
    {
        printf("Guess The Number: \n");
        scanf("%d", &guess);
        if(guess<random)
            printf("Higher Number Please! \n");
        else if(guess>random)
            printf("Lower Number Please! \n");
        else
            printf("You guessed the number %d in %d attemps. \n ",random,attemps);
        attemps++;
    }while(guess!=random);
}
}
