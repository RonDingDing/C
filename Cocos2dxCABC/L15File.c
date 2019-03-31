#include <stdio.h>

int main(int argc, const char *argv[])
{
    FILE *f = fopen("data.txt", "w");

    if (f != NULL)
    {
        int i;
        for (i = 0; i < 100; i++)
        {
            fprintf(f, "Hello %d\n", i);
        }
    }
    fclose(f);
    printf("End\n");


    FILE *f2 = fopen("data.txt", "r");

    fseek(f2, 0, SEEK_END);
    // printf("%ld\n", ftell(f));

    long size = ftell(f2);
    char buf[size + 1];
    fseek(f, 0, SEEK_SET);
    fread(buf, sizeof(unsigned char), size, f2);
    buf[size] = '\0';
    fclose(f2);
    printf("%s\n", buf);

    return 0;
}
