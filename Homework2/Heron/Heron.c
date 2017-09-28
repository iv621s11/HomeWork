#include <stdio.h>
#include <math.h>

float proverka(float a, float b, float c);

float proverka_a(float a);

int main()
{
	float a, b, c;
	float p, s;
	
	printf("Введите стороны треугольника: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if (proverka(a, b, c) != 1){
		return 0;
	}
	
	if(a + b > c && a + c > b && b + c > a){
		p = (a + b + c) / 2;
		s = sqrtf(p * (p - a) * (p - b) * (p - c));
		printf("Площадь треугольника = %f\n", s);
		return 0;
	}else{
		printf("Из сторон с такими длинами треугольник создать невозможно(((((((((.\n");
		return 0;
	}
}

float proverka_a(float a){
	if(a < 0){
		printf("Число %f введено неверно\n", a);
		return 0;
	}else{
		return 1;
	}
}

float proverka(float a, float b, float c){
	
	int f;
	
	if(proverka_a(a) != 1){
		f = 1;
	}
	
	if(proverka_a(b) != 1){
		f = 1;
	}
	
	if(proverka_a(c) != 1){
		f = 1;
	}
	
	if(f == 1){
		printf("Одно или несколько чисел введены неверно, проверьте выше и исправьте для правильной работы программы.\n");
		return 0;
	}else{
		return 1;
	}
}
	
		
