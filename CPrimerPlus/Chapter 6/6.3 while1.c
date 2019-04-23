#include <stdio.h>
int main(void)
{
    int n = 0;
    while (n < 3)
        printf("n in %d\n", n);
    n++;
    printf("That's all this program does\n");
    return 0;
}