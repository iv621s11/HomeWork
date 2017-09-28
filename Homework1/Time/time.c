#include<stdio.h>

int main()
{
	int time, d, h, m, s;
	
	printf("Введите кол-во секунд для расчёта: ");
	scanf("%d", &time);
	
	d = time / 86400;
	h = (time - d * 86400) / 3600;
	m = (time - d * 86400 - h * 3600) / 60;
	s = (time - d * 86400 - h * 3600 - m * 60);
	
	printf("Дни:%2d\t Часы:%2d\t Минуты%2d\t Секунды%2d\n", d, h, m, s);
	
	return 0;
}
