#include <stdio.h>

int main()

{
    int a;
    int b;

    printf("a degerini giriniz:");
    scanf("%d", &a);

    printf("b degerini giriniz:");
    scanf("%d", &b);

    if (a < b)
    {
        printf("a b den kucuktur.");
    }
    else if(a == b)
    {
        printf("a be ye esittir.");
    }
    else if(a > b)
    {
        printf("a b den buyuktur.");
    }

    return 0;
}
