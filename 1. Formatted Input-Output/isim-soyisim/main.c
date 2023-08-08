#include <stdio.h>

int main()
{

    char name[100];
    char surname[100];

    int age;
    int year;

    float average;

    printf("isminizi giriniz: ");
    scanf("%s", &name);

    printf("\nsoyisminizi giriniz: ");
    scanf("%s", &surname);

    printf("\nyasinizi giriniz: ");
    scanf("%d", &age);

    printf("\ndogum yilinizi giriniz: ");
    scanf("%d", &year);

    printf("\nortalamanizi giriniz: ");
    scanf("%f", &average);

    printf("isminiz:%s, soyisminiz:%s, yasiniz:%d, dogum yiliniz:%d, ortalamaniz:%.2f " ,name, surname, age, year, average);

    return 0;
}
