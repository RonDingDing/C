#include <stdio.h>
int main(void){
    char c = '\a';
    char e = '\007';
    char d = '\x41';
    char f = '\f';
    printf("%c", c);
    printf("%c", e);
    printf("%c", d);
    printf("%c", f);
    return 0;
}