#include <stdio.h>
#define MAX(A, B) \
    A > B ? A : B
int main(int argc, const char *argv[])
{
    printf("Hello, %f\n", MAX(10.2, 20.3));
    printf("Hello, %d\n", MAX(102, 203));

    return 0;
}
