#include <stdio.h>

int toplam(int sayi)
{
	int toplam = sayi;

	while (sayi > 0)
	{
		toplam = toplam + sayi - 1;
		sayi--;
	}
	printf("%d", toplam);
}

int main()
{
	int sayi;
	printf("Sayi gir: ", &sayi);
	scanf("%d", &sayi);

	toplam(sayi);

	return 0;
}
