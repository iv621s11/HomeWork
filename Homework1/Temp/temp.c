#include<stdio.h>

int main()
{
	int celc, fahr;
	int upper, lower;	
	int step = 20;
	
	printf("Пожалуйста, введите нижнюю и верхнюю границы температур\n");
	scanf("%d %d", &lower, &upper);
	
	celc = lower;
	
	printf("\n  С\t  F\n");
	
	while (celc <= upper) {
		fahr = celc * 9 / 5 + 32;
		printf("%5d\t%5d\n", celc, fahr);
		celc += step;
	}
	
	return 0;
}
