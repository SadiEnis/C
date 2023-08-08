#include <stdio.h>

int main()
{
   int a;
   a = 5;

   printf("%d",a);
   printf("%d",a++);    // önce 5i yazar sonra ++ ataması yapar. //
   printf("%d",++a);
   printf("%d",a);

   return 0;
}
