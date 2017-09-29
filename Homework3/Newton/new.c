#include<stdio.h>

int main()
{
	float n, x, m;
	int i;
	
	printf("Введите число из которого нужно найти корень: ");
	scanf("%f", &n);
	
	printf("Введите приблизительное значение корня: ");
	scanf("%f", &x);
	for(i = 1; i < 20; i++){
		m = (x + (n / x)) / 2;
		x = m;
	}
	
	printf("Корень равен: %.4f\n", m);
	
	return 0;
}
