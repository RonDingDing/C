#include <stdio.h>
int main(int argc, const char *argv[])
{
    // int a;
    //
    // for (a = 0; a < 100; a++)
    // {
    //     printf("Hello %d\n", a);
    // }

    int i;

    // for (i = 0; i < 100; printf("%d\n", i++))
    // {
    //     printf(">>>\n");
    // }
    //
    // i = 0;
    // while (i < 100)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }

    i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < 100);

    return 0;
}
