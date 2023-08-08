#include <stdio.h>

int main()
{
    int sayi;

    printf("Bir sayi giriniz:");
    scanf("%d", &sayi);
    
    // Mod işlemi birinci değeri ikinciye böler kalanı bize döner.
    if(sayi % 2 == 0) 
    {
        printf("Girdiginiz sayi cifttir.");
    }
    else
    {
        printf("Girdiginiz sayi tektir.");
    }

    return 0;
}
