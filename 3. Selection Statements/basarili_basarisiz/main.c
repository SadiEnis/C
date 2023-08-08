#include <stdio.h>

int main()
{
    int not;

    printf("Aldiginiz notu giriniz:");
    scanf("%d", &not);

    if(not>=80)
    {
        printf("Basarili");
    }
    else if(80>not && not>=60)
    {
        printf("Orta");
    }
    else if(not<60)

    {
    printf("Basarisiz");
    }
    return 0;
}
