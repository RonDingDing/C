#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char *argv[])
{
    srand((int)time(NULL));
    int randNum = rand() % 100;
    printf("Input a value ranged from 0 to 100\n");
    int userInput;

    while (1)
    {
        scanf("%d", &userInput);
        if (userInput < randNum)
        {
            printf("Too small\n");
        }else if (userInput > randNum){
             printf("Too big\n");
        }
        else{
            printf("Correct\n");
            break;
        }
    }

    printf("exit\n" );
    return 0;
}