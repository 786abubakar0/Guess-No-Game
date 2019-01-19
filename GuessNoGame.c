#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    while(1)
    {



    srand(time(NULL));
    int number=(rand()%100)+1;
    int input;
    int i=2;

    printf("\n\nI'm thinking of a number between 1-100. You have 7 guesses.\n");
    printf("First guess: ");
    scanf("%d",&input);
     if(input<number)
            printf("\nSorry, you are too low.\n");
     else if(input>number)
            printf("\nSorry, you are too high.\n");
     else
            printf("\nYou guessed it!\n");

    while(input!= number && i<=7)
    {
        printf("\nGuess # %d: ",i);
        scanf("%d",&input);
        if(input<number)
            printf("\nSorry, you are too low.\n");
        else if(input>number)
            printf("\nSorry, you are too high.\n");
        else
            printf("\nYou guessed it!\n");
            i++;

    }
    printf("the secret no is %d.\n",number);





    if (input==number)
    {

    srand(time(NULL));
    int number=(rand()%200)+1;
    int input;
    int i=2;
        printf("\n\nNext level!\n\t\tNow guess a number between 1-200. You have 7 guesses.\n");
    printf("First guess: ");
    scanf("%d",&input);
     if(input<number)
            printf("\nSorry, you are too low.\n");
     else if(input>number)
            printf("\nSorry, you are too high.\n");
     else
            printf("\nYou guessed it!\n");

    while(input!= number && i<=7)
    {
        printf("\nGuess # %d: ",i);
        scanf("%d",&input);
        if(input<number)
            printf("\nSorry, you are too low.\n");
        else if(input>number)
            printf("\nSorry, you are too high.\n");
        else
            printf("\nYou guessed it!\n");
            i++;

    }
    printf("the secret no is %d.\n",number);

    }


        int again;
    printf("to play again press any number: ");
    scanf("%d",&again);
    continue;
    }

    system("pause");
	return 0;
}
