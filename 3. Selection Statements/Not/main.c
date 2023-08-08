#include <stdio.h>

int main()
{
    int not;

    printf("Notunuzu giriniz:");
    scanf("%d", &not);

    switch(not)
    {
    case 10:
        printf("On");
        break;

    case 20:
        printf("Yirmi");
        break;

    case 30:
        printf("Otuz");
        break;

    case 40:
        printf("Kirk");
        break;
    case 50:
        printf("Elli");
        break;

    default:
        printf("Hatali kullanim!");

    }

    return 0;
}
