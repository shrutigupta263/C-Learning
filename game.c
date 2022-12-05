#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand()%n;
}
int greater(char1,char2)
{
    if(char1 == char2)
    {
        return -1;
    }
    if((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    if((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if((char1 == 's') && (char2 == 'r'))
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
    int playerScore = 0,compScore = 0, temp;
    char playerChar, compChar;
    char dict[]={'r', 'p', 's'};
    printf("welcome to the Rock, Paper, Scissor. \n");
    for (int i=0; i<3; i++)
    {
        printf("player 1 turn:\n");
        printf("Choose 1 for rock, 2 for paper and 3 foo scissor\n");
        scanf("%d", &temp);
        playerChar = dict[temp-1];
        printf("You chhoose %d\n\n",playerChar);


        //Generate computer input
        printf("Computer's turn:\n");
        printf("choose 1 for rock, 2 for paper and 3 for scissoor");
        temp = generaterRandomNumber(3) + 1;
        compChar = dict[temp-1];
        printf("CPU choose %c\n",playerChar);


        if(greater(compChar, playerChar) == 1)
        {
            compScore += 1;
        }
        else if(greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
        }
        else
        {
            playerScore +=1;
        }


    }
    if(playerScore > compScore)
    {
        printf("Yoou win the game\n");
    }
    else if (playerScore < compScore)
    {
        printf("CPU win the game\n");
    }
    else
    {
        printf(" its draw\n");
    }
    return 0;
}