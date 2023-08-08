#include <stdio.h>

int perfect(int per)
{
    int i = 1;
    int array[50];
    int total = 0;
    int k = 0;


    while(i < per)
    {
        if(per % i == 0)
        {
            array[k] = i;
            k++;
            total += i;
        }
        i++;
    }
    if(total == per)
        return 1;
    else
        return 0;
}

int main()
{
    int per = perfect(125);
    if(per==1)
    {
        printf("Perfect sayi");
    }
    else if(per == 0)
    {
        printf("Perfect degil.");
    }

    return 0;
}