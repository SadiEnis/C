#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int yil = 2022;
    short int dogumYili;
    short int yas;

    printf("Yasinizi giriniz: ");
    scanf("%hd", &yas);

    dogumYili=yil-yas;

    printf("Dogum yiliniz: %hd\n", dogumYili);

    return 0;
}
