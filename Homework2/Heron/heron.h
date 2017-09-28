#ifndef HERON_H
#define HERON_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float proverka_a(float a){
	if(a < 0){
		printf("Число %f введено неверно\n", a);
		return 0;
	}else{
		return 1;
	}
}

void proverka_chisel(float a, float b, float c){
	
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
	exit(0);
	}
}

void proverka_sozdaniya(float a, float b, float c){
	if(a + b <= c || a + c <= b || b + c <= a){
		printf("Треугольник с такими длинами сторон не существует\n");
		exit(0);
	}
}
	
void raschet_ploshadi(float a, float b, float c){
	float p, s;
	
	p = (a + b + c) / 2;
	s = sqrtf(p * (p - a) * (p - b) * (p - c));
	
	printf("Площадь треугольника = %f\n", s);
}

#endif
