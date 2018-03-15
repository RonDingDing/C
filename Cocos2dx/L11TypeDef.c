#include <stdio.h>
typedef struct
{
    int age;
} People;

void sayHello()
{
    printf("Fuck\n");
}

typedef void (*Func)();
//没有参数()，没有返回void的函数指针定义为Func

int main(int argc, const char *argv[])
{
    People p;

    p.age = 10;
    Func f = sayHello;
    f();

    printf("Hello, %d\n", p.age);

    return 0;
}
