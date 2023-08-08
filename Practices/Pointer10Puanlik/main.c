#include <stdio.h>

void fonk(int *array, int size, int *min, int *max)
{
  *min = array[0];
  *max = array[0];

  for (int i = 1; i < size; i++)
    {

    if (array[i] < *min)
        *min = array[i];

    if (array[i] > *max)
        *max = array[i];

    }
}

int main()
{
  int array[5] = {1,5,6,8,4};
  int min, max;

  fonk(array, 5, &min, &max);
  printf("Minimum sayi: %d\n", min);
  printf("Maximum sayi: %d\n", max);

  return 0;
}
