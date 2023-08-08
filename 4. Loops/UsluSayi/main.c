#include <stdio.h>

int main()
{
    int sayi=3;
    int us=2;

    int i;
    int sonuc=1;

    for(i=1;i<=us;i++)
    {
        sonuc *=sayi;
    }
    printf("%d", sonuc);

    return 0;
}
