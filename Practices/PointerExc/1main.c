#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5, b=7;
    printf("%d %p\n", a, &a);
    printf("%d %p", b, &b);

    return 0;
}
