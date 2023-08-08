#include <stdio.h>
#include <stdlib.h>

int main()
{
    int noTel[] = {0,5,7,6,4,9,4,3,2,3,3};
    int i;
    int enbuyuk = noTel[0];

    for(i=0;i<=10;i++)
    {
        if(enbuyuk>noTel[i])
        {
            printf("En buyuk deger: %d", enbuyuk);
        }
    }

    return 0;
}
