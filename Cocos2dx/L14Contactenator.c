#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    char buf[100];

    memset(buf, 0, 100);
    sprintf(buf, "Hello %d, %f, %s", 100, 1.2, "apple");
    printf("%s\n", buf);

    return 0;
}
