#include <stdio.h>

int buyuk(int dizi[], int boyut)
{
    int i;
    int max = dizi[0];
    for(i=0; i<boyut; i++)
    {
        if(dizi[i]>max)
            max = dizi[i];
    }
    return max;
}

int main()
{
    int max;
    int dizi[5] = {1,3,6,5,4};
    max = buyuk(dizi, 5);

    printf("%d", max);

    return 0;
}
