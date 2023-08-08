#include <stdio.h>

int main()
{
    int x, y;
    char islem;

    printf("Islemi giriniz: [+][-][*][/][%]");
    scanf("%c", &islem);

    printf("Birinci sayiyi giriniz:");
    scanf("%d", &x);

    printf("Ikinci sayiyi giriniz:");
    scanf("%d", &y);


    switch(islem)
    {

case '+':

    printf("x+y = %d", x+y);
    break;

case '-':

    printf("x-y = %d", x-y);
    break;

case '*':

    printf("x*y = %d", x*y);
    break;

case '/':
    if(y == 0)
    {
        printf("Sonsuz");
    } else
    {

        printf("x/y = %f", x/y);

    }
    break;

default:
    printf("Hatali islem!");

    }

    return 0;
}

