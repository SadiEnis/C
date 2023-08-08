#include <stdio.h>

int fonk(int *dizi,int boyut, int eleman)
{
    for(int i=0; i<boyut; i++)
    {
        if(dizi[i] == eleman)
            return 1;
        else
            return 0;
    }
}

int main()
{
    int dizi[5] = {1,3,5,6,7};

    int donus = fonk(dizi, 5, 1);

    if(donus == 1)
        printf("VAR");
    else
        printf("YOK");

    return 0;
}
