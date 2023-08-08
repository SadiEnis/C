#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi[5];
    int i;
    int toplam = 0;

    for(i=0;i<5;i++)
    {
        printf("Sayi: ");
        scanf("%d",  &sayi[i]);
    }
    for(i=0;i<5;i++)
    {
        toplam += sayi[i];
    }
    printf("Girilen degerlerin aritmatik ortalamasi: %d", toplam/5);


    return 0;
}
