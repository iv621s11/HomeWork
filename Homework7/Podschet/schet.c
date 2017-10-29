#include <stdio.h>

int main()
{
	int mass[25] = {0};
	int i;
	int one = 0, two = 0, three = 0, four = 0, five = 0;
	int six = 0, seven = 0, eight = 0, nine = 0;
	
	//Ввод строки
	
	printf("Введите набор цифр");
	
	for(i = 0; i < 25; i++){
		scanf("%d", &mass[i]);
		if(mass[i] == '\0'){
			break;
		}
	}
	 
	//Разложение потока
	 
	for(i = 0; i < 25; i++){
		switch(mass[i]){
			case (1):
				one++;
				break;
			case (2):
				two++;
				break;
			case (3):
				three++;
				break;
			case (4):
				four++;
				break;
			case (5):
				five++;
				break;
			case (6):
				six++;
				break;
			case (7):
				seven++;
				break;
			case (8):
				eight++;
				break;
			case (9):
				nine++;
				break;
		}
	}

	//Вывод цифр
	
	
	for(i = 0; i < one; i++){
		printf("1 ");
	} 
	
	for(i = 0; i < two; i++){
		printf("2 ");
	} 
	
	for(i = 0; i < three; i++){
		printf("3 ");
	} 
	
	for(i = 0; i < four; i++){
		printf("4 ");
	} 
	
	for(i = 0; i < five; i++){
		printf("5 ");
	} 
	
	for(i = 0; i < six; i++){
		printf("6 ");
	} 
	
	for(i = 0; i < seven; i++){
		printf("7 ");
	} 
	
	for(i = 0; i < eight; i++){
		printf("8 ");
	} 
	
	for(i = 0; i < nine; i++){
		printf("9 ");
	} 
	
	return 0;
}
