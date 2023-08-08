#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;

    int *p;
    int *p1;
    int *p2;

    p = &a;
    p1 = &a;
    p2 = &a;

    *p2 = 50;

    printf("%d\n", *p);
    printf("%d\n", *p1);
    printf("%d\n", *p2);

    return 0;
}
