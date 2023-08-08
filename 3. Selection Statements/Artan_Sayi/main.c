#include <stdio.h>

int main()
{
    int sayi, birler, onlar, yuzler;

    printf("3 basamakli bir sayi giriniz:");
    scanf("%d", &sayi);

    birler = sayi%10;
    onlar = (sayi/10)%10;
    yuzler = sayi/100;

    if(birler>onlar && onlar>yuzler)
    {
        printf("Sayi artan sayidir.");
    }
    else
        printf("Sayi artan sayi değildir.");

    return 0;
}
