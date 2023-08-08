#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;

    printf("Yildiz sayisi: ");
    scanf("%d", &sayi);

    int a;
    for(a=0;a<sayi;a++)
    {
        printf("*");
    }

    return 0;
}
