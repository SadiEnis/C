#include <stdio.h>

float fonk(float width,float lenght)
{
    return width*lenght;
}


int main()
{
    float width, lenght;
    scanf("%f", &width);
    scanf("%f", &lenght);

    float area;
    area = fonk(width,lenght);
    printf("%.2f", area);


    return 0;
}

/*void fonk(float w,float l)
{
    float area  = w*l;
    printf("%.2f", area);
}

int main()
{
    fonk(6.1,2.9);

    return 0;
}
*/
