#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1 = 10;
    int sayi2 = -20;
    printf("sayi1 = %d\n", sayi1);
    printf("sayi2 = %d\n\n", sayi2);

    int *p1, *p2;

    p1 = &sayi2;
    p2 = &sayi1;

    int temp = *p2;
    *p2 = *p1;
    *p1 = temp;

    printf("sayi1 = %d\n", sayi1);
    printf("sayi2 = %d\n", sayi2);

    return 0;
}
