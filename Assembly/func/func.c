#include <stdio.h>

extern int func_call(int a, int b, int c);

typedef struct Foo {
    int a;
    int b;
    int c;
} Foo;

int magic_function(Foo bar)
{
    printf("a: %d\nb: %d\nc: %d\n", bar.a, bar.b, bar.c);
    return bar.a * bar.b + bar.c;
}

int main(int argc, char* argv[])
{
    int result = func_call(1,2,3);
    printf("Result: %d\n", result);

    return 0;
}
