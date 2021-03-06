#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generaterandonNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char char1, char char2)
{
    // return 1 if c1>c2 else 0, if c1==c2 it will return -1
    if (char1 == char2)
    {
        return -1;
    }

    if ((char1 == 'R') && (char2 == 'S'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if ((char1 == 'R') && (char2 == 'P'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if ((char1 == 'S') && (char2 == 'P'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int playerscore = 0, Comscore = 0, temp;
    char playerchar, comchar;
    char dict[] = {'R', 'P', 'S'};
    printf("Welcome to Rock, Paper, Scissors.\n");
    for (int i = 0; i < 3; i++)
    {
        //  Take player 1's Input
        printf("Player 1's turn: \n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
        scanf("%s", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("You choose  %c\n\n", playerchar);

        //  Generate Computer 's Input
        printf("Computer's turn: \n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors\n ");
        temp = generaterandonNumber(3) - 1;
        comchar = dict[temp - 1];
        printf("Cpu choose  %c\n\n", comchar);

        // Compare these scores
        if (greater(comchar, playerchar) == 1)
        {
            Comscore += 1;
            printf("Com got it\n\n");
        }
        else if (greater(comchar, playerchar))
        {
            Comscore += 1;
            playerscore += 1;
            printf("It's a Draw\n\n");
        }
        else
        {
            playerscore += 1;
            printf("You got it\n\n");
        }
        printf("You: %d\n CPU: %d \n", playerscore, Comscore);
    }

    if (playerscore > Comscore)
    {
        printf("You win the game");
    }
    else if (playerscore < Comscore)
    {
        printf("Com win the game");
    }
    else
    {
        printf("Draw game");
    }

    return 0;
}