#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=20, b=20;

    int *p, *p1;

    p = &a;
    p1= &b;

    p = p1;

    printf("%d\n", *p);
    printf("%d\n", *p1);

    return 0;
}
