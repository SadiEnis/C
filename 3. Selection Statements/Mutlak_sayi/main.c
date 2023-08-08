#include <stdio.h>

int main()
{
    int sayi;

    printf("Bir tamsayi giriniz:");
    scanf("%d", &sayi);

    if(sayi<0)
    {
        printf("%d", sayi * (-1));
    }
    else if(sayi>0)
    {
        printf("%d", sayi);
    }

    return 0;
}
