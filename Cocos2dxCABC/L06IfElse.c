#include <stdio.h>
int max(int a, int b)
{
    return a > b ? a : b;
}

void test(int score)
{
    if (score > 90)
    {
        printf("Excellent.");
    }
    else if (score >= 80)
    {
        printf("Good.");
    }
    else if (score >= 60)
    {
        printf("Passed.");
    }
    else
    {
        printf("Failed.");
    }
}

void test1(int score)
{
    switch (score / 10)
    {
    case 9:
        printf("Excellent.");
        break;

    case 8:
        printf("Good.");
        break;

    case 6:
    case 7:
        printf("Passed.");
        break;

    default:
        printf("Failed.");
    }
}

int main(int argc, const char *argv[])
{
    test1(35);

    return 0;
}
