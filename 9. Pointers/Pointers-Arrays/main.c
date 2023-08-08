#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, toplam = 0;
    int dizi[] = {1,2,4,8,12};

    int *p = &dizi[0]; // Her dizi bir pointer'dır.

    for(i=0; i<5; i++)
    {
        toplam = toplam + *p;
        p++;
    }
    printf("%d", toplam);

    return 0;
}
