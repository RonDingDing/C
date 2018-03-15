#include <stdio.h>
int main(int argc, const char *argv[])
{
    //printf("Hello, C!\n");
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}

// 命令行可传入多个参数，用空格隔开，用""括起单个参数
//D:\代码库\C>L01HelloC.exe hello "c world"
//L01HelloC.exe
//hello
//c world
