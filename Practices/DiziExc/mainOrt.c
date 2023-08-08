#include <stdio.h>

float ort(int *dizi, int boyut)
{
    int i;
    int total = 0;
    for(i=0; i<boyut; i++)
    {
        total += dizi[i];
    }
    return (float)total/boyut;
}

int main()
{
    int dizi[] = {1,3,4,5,6};
    float sonuc = ort(dizi, 5);
    printf("%.2f", sonuc);


    return 0;
}
