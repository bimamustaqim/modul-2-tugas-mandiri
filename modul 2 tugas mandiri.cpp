#include <stdio.h>

int main()
{
	float alas = 8.0;
	float tinggi = 5.0;
	float luas;
	
	luas = 0.5 * alas * tinggi;
	
	printf("alas 8.0 cm \n", alas);
	printf("tinggi 5.0 cm \n", tinggi);
	printf("luas segitiga: %.2f cm^2\n", luas);
	return 0;
}
