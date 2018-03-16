#include <stdio.h>
#include <stdlib.h>
////////////////////////////////Object begin
#define ObjectCreate(TYPE)    malloc(sizeof(TYPE))
#define ObjectField    void (*onDelete)(void *);
#define ObjectDelete(obj)   \
    {                       \
        obj->onDelete(obj); \
        free(obj);          \
    }

typedef struct Object
{
    ObjectField
} Object;


// void ObjectDelete(Object *obj)
// {
//     obj->onDelete(obj);
//     free(obj);
// }

void ObjectOnDelete(void *obj)
{
    printf("Object on delete\n");
}

Object *ObjectInit(Object *obj)
{
    obj->onDelete = ObjectOnDelete;

    return obj;
}

////////////////////////////////Object end


typedef struct
{
    ObjectField
    int age;
    void (*sayHello)();
} People;

void PeopleSayHello()
{
    printf("Hello\n");
}

//
// People *PeopleCreate()
// {
//     return malloc(sizeof(People));
// }
//
// void PeopleDelete(People *p)
// {
//     free(p);
// }

void PeopleOnDelete(void *p)
{
    ObjectOnDelete(p);
    printf("People on delete\n");
}

People *PeopleInit(People *p, int age)
{
    ObjectInit((Object *)p);
    p->age      = age;
    p->sayHello = PeopleSayHello;
    p->onDelete = PeopleOnDelete;

    return p;
}

int main(int argc, const char *argv[])
{
    People *p = PeopleInit(ObjectCreate(People), 20);

    printf("Hello, %d!\n", p->age);
    p->sayHello();
    ObjectDelete(p);

    return 0;
}
