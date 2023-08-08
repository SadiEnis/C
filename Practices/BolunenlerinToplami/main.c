#include <stdio.h>

void bolenler(int sayi)
{
    int i=1;
    int toplam = 0;
    while(i<=sayi)
    {
        if(sayi%i == 0)
            toplam += i;
        i++;
    }
    printf("%d", toplam);
}

int main()
{
    int sayi;
    scanf("%d", &sayi);
    bolenler(sayi);
}
