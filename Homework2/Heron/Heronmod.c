#include "heron.h"

int main()
{
	float a, b, c;
	
	printf("Введите стороны треугольника: ");
	scanf("%f %f %f", &a, &b, &c);
	
	proverka_chisel(a, b, c);
	proverka_sozdaniya(a, b, c);
	raschet_ploshadi(a, b, c);
	
	return 0;
}
