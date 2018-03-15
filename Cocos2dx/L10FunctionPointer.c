#include <stdio.h>
void sayHello()
{
    printf("Hello C\n");
}

int main(int argc, const char *argv[])
{
    // sayHello();
    void (*p)();
    //函数指针，只能指向没有返回值void，没有参数()的函数
    p = sayHello;
    p();

    return 0;
}
