#include <stdio.h>
#include <stdlib.h>

int main()
{
    int not;

    do
    {
    printf("Notunuzu giriniz:");
    scanf("%d", &not);
    }
    while(0>not || not>100);
    
    printf("\nNotunuz gecerli!");

    return 0;
}
