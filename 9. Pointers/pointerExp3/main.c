#include <stdio.h>
#include <stdlib.h>

int main()
{
    int deger1, deger2;
    deger1 = 100;
    deger2 = 200;

    int *p, *p1;

    p = &deger1;
    p1 = &deger2;

    printf("%d %d %d %d %p %p", deger1, deger2, *p, *p1, p, p1+2);

    return 0;
}
