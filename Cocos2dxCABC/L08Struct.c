#include <stdio.h>
struct People
{
    int  age;
    char *name;
};



int main(int argc, const char *argv[])
{
    struct People p;

    p.age  = 10;
    p.name = "XiaoLi";
    printf("p.age: %d\n", p.age);

    struct People p1 = p;
    p.age = 20;
    printf("p.age: %d\n", p.age);
    printf("p1.age: %d\n", p1.age);

    return 0;
}
