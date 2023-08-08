#include <stdio.h>

void write_eight(int num)
{
    for(num; num>0; num--)
    {
        printf("8");
    }
}

int main()
{
    int num;

    printf("Imput a Integer: ");
    scanf("%d", &num);

    eight(num);

    return 0;
}
