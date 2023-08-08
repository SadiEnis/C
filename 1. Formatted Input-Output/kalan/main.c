#include <stdio.h>

int main()
{
    int a;
    int b;
    int toplam;
    int kalan;

    printf("a sayisini giriniz: ");
    scanf("%d", &a);

    printf("b sayisini giriniz: ");
    scanf("%d", &b);

    toplam = a * b;
    kalan = toplam % 12;

    printf("%d", kalan);

    return 0;
}
