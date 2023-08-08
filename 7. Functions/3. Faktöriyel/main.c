#include <stdio.h>

int factorial(int num)
{
    int fact=1;
    int i;

    if(num > 0)
    {
        for(i=num;i>0;i--)
        {
            fact = fact*i;
        }
        printf("%d! = %d", num, fact);
    }
    else
        printf("Pozitif tam sayi giriniz!");

}

int main()
{
    int num;

    printf("Faktoriyelislemi yapmak istediginiz sayiyi giriniz: ");
    scanf("%d", &num);

    factorial(num);

    return 0;
}
