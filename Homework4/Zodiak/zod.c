#include <stdio.h>

int main()
{
	int d, m;
	
	printf("Введите дату рождения(день месяц): ");
	scanf("%d%d", &d, &m);
	
	if(m > 12 || m < 1){
		printf("Не верная дата!\n");
		return 0;
	}
	
	switch(m){
		
		case(1):
			if(d > 20){
				printf("Ваш знак зодиака: Водолей\n");
				break;
			}else if(d > 31){
				printf("Не верная дата!\n");
			}else{
				printf("Ваш знак зодиака: Козерог\n");
				break;
			}
			
		case(2):
			if(d > 18){
				printf("Ваш знак зодиака: Рыбы\n");
				break;
			}else if(d > 29){
				printf("Не верная дата!\n");
			}else{
				printf("Ваш знак зодиака: Водолей\n");
				break;
			}
				
		case(3):
			if(d > 20){
				printf("Ваш знак зодиака: Овен\n");//Start
				break;
			}else if(d > 31){
				printf("Не верная дата!\n");
			}else{
				printf("Ваш знак зодиака: Рыбы\n");
				break;
			}
				
		case(4):
			if(d > 20){
				printf("Ваш знак зодиака: Телец\n");
				break;
			}else if(d > 30){
				printf("Не верная дата!\n");
			}else{
				printf("Ваш знак зодиака: Овен\n");
				break;
			}
				
		case(5):
			if(d > 21){
				printf("Ваш знак зодиака: Близнецы\n");
				break;
			}else if(d > 31){
				printf("Не верная дата!\n");
			}else{
				printf("Ваш знак зодиака: Телец\n");
				break;
			}
			
		case(6):
			if(d > 22){
				printf("Ваш знак зодиака: Рак\n");
				break;
			}else if(d > 30){
				printf("Не верная дата!\n");
			}else{
				printf("Ваш знак зодиака: Близнецы\n");
				break;
			}
			
		case(7):
			if(d > 22){
				printf("Ваш знак зодиака: Лев\n");
				break;
			}else if(d > 31){
				printf("Не верная дата!\n");
			}else{
				printf("Ваш знак зодиака: Рак\n");
				break;
			}
			
		case(8):
		if(d > 23){
				printf("Ваш знак зодиака: Дева\n");
				break;
			}else if(d > 31){
				printf("Не верная дата!\n");
			}else{
				printf("Ваш знак зодиака: Лев\n");
				break;
			}
			
		case(9):
			if(d > 22){
				printf("Ваш знак зодиака: Весы\n");
				break;
			}else if(d > 30){
				printf("Не верная дата!\n");
			}else{
				printf("Ваш знак зодиака: Дева\n");
				break;
			}
			
		case(10):
			if(d > 23){
				printf("Ваш знак зодиака: Скорпион\n");
				break;
			}else if(d > 31){
				printf("Не верная дата!\n");
			}else{
				printf("Ваш знак зодиака: Весы\n");
				break;
			}
			
		case(11):
			if(d > 22){
				printf("Ваш знак зодиака: Стрелец\n");
				break;
			}else if(d > 30){
				printf("Не верная дата!\n");
			}else{
				printf("Ваш знак зодиака: Скорпион\n");
				break;
			}
			
		case(12):
			if(d > 21){
				printf("Ваш знак зодиака: Козерог\n");
				break;
			}else if(d > 31){
				printf("Не верная дата!\n");
			}else{
				printf("Ваш знак зодиака: Стрелец\n");
				break;
			}
	}
		
	return 0;
}

