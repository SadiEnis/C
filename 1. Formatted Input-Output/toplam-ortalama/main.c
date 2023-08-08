#include <stdio.h>

int main()
{
    float num1;
    float num2;
    float num3;

    printf("1.sayiyi giriniz: ");
    scanf("%f", &num1);

    printf("2.sayiyi giriniz: ");
    scanf("%f", &num2);

    printf("3.sayiyi giriniz: ");
    scanf("%f", &num3);

    float ort;
    ort = (num1 + num2 + num3) / 3;

    printf("ortalama:%.2f", ort);

    return 0;
}
