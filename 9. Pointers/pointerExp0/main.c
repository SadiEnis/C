#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    a=5;

    int *p;
    p = &a;

    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%p\n", p+2);

    return 0;
}
