#include <stdio.h>

int main()
{

    int sayi;

    printf("Sayi giriniz:");
    scanf("%d", &sayi);

    if(9 < sayi && sayi < 100)
    {
        printf("Sayi iki basamaklidir.");
    }
    else if(99 < sayi && sayi < 1000)
    {
        printf("Sayi uc basamaklidir.");
    }
    return 0;
}
