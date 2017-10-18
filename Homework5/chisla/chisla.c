#include<stdio.h>

int main()
{
	int start, n, i;
	
	printf("Введите первое число и кол-во элементов в последовательности: ");
	scanf("%d %d", &start, &n);
	
	for(i = 1; i <= n; i++){
		printf("%d  ", start);
		start *= 2;
	}
	printf("\n");
	return 0;
}
