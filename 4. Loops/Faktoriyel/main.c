#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int fakt=1;

    printf("Faktoriyel almak istediginiz sayiyi giriniz: ");
    scanf("%d", &n);

    while(n!=0)
    {
        fakt = fakt*n;
        n--;
    }
    printf("%d", fakt);

    return 0;
}
