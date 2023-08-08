#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Sayi: ");
    scanf("%d", &sayi);

    buyukbasamak(sayi);

    return 0;
}

void buyukbasamak(sayi)
{
    if(sayi>9 && sayi<100)
    {
        if(sayi/10 > sayi%10)
            printf("%d", sayi/10);

        else if(sayi%10 > sayi/10)
            printf("%d", sayi%10);
    }
    else
        printf("Hatali bir sayi girdiniz!");
}

