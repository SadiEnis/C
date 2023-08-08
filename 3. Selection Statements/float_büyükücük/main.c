#include <stdio.h>

int main()
{
    float deger1, deger2;

    printf("Birinci degeri giriniz: ");
    scanf("%f", &deger1);

    printf("Ikinci degeri giriniz: \n");
    scanf("%f", &deger2);

    if(deger1 < deger2)
    {
        printf("%.2f degeri kucuktur.\n", &deger1);
        printf("%.2f degeri buyuktur.\n", &deger2);
    }
    else if(deger1 > deger2)
    {
        printf("%.2f degeri buyuktur.\n", &deger1);
        printf("%.2f degeri kucuktur.\n", &deger2);
    }
    return 0;
}
