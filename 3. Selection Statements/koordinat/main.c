#include <stdio.h>

int main()
{
    int x,y;

    printf("Koordinatin x'ini giriniz:");
    scanf("%d", &x);

    printf("Koordinatin y'sini giriniz:");
    scanf("%d", &y);

    if(x>0 && y>0)
    {
        printf("Koordinat birinci bolgededir.");
    }
    else if(x<0 && y>0)
    {
        printf("Koordinat ikinci bolgededir.");
    }
    else if(x<0 && y<0)
    {
        printf("Koordinat ucuncu bolgededir.");
    }
    else if(x>0 && y<0)
    {
        printf("Koordinat dorduncu bolgededir.");
    }

    return 0;
}
