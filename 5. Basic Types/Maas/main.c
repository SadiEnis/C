#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ucret=235.28;
    float sure=180;

    float maas=ucret*sure;
    int maasInt=(int)maas;
    int maas2=(int)ucret*sure;

    printf("Gercek maasiniz: %f\n", maas);
    printf("Tamsayi maasiniz: %d\n", maasInt);
    printf("Neden hesapladigimizi bilmedigim maasiniz: %d", maas2);

    return 0;
}
