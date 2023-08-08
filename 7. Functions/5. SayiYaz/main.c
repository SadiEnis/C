#include <stdio.h>

int sayiyaz(int yuzler, int onlar, int birler)
{
    if(yuzler<=0 || yuzler>9 || onlar<0 || onlar>9 || birler<0 || birler>9)
        printf("\nHatali bir sayi girdiniz! Lutfen uc basamakli tamsayi giriniz.\n");
    else
    {
        int sayi;
        sayi = yuzler*100+onlar*10+birler;
        printf("'%d''%d''%d' -> %d", yuzler,onlar,birler,sayi);
    }
}

int main()
{
    int yuzler,onlar,birler;

    printf("Yuzler basamagi: ");
    scanf("%d", &yuzler);
    printf("Onlar basamagi: ");
    scanf("%d", &onlar);
    printf("Birler basamagi: ");
    scanf("%d", &birler);

    sayiyaz(yuzler,onlar,birler);

    return 0;
}
