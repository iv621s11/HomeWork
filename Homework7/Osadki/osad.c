#include <stdio.h>
int main()
{
	int lenght;
	int mas[15][15];
	int j, i, n;
	int flagleft, flagright;
	int osadki = 0;
	
	printf("Введите длину рельефа: ");
	scanf("%d", &lenght);
	
	int stroka[lenght];
	
	for(i = 0; i < lenght; i++){
		scanf("%d", &stroka[i]);
		if(stroka[i] == 0){
			stroka[i] = 1;
		}
	}
	
	for(i = 0; i < lenght; i++){
		for(j = 0; j < 15; j++){
			n = stroka[i];
			if(j <= (n - 1)){
				mas[j][i] = 1;
			}else{
				mas[j][i] = 0;
			}
		}
	}
	
	printf("\n");
	
	for(i = 0; i < 15; i++){
		for(j = 0; j < 15; j++){
			flagleft = 0;
			flagright = 0;
			if(mas[i][j] == 0){
				for(n = j; n >= 0; n--){
					if(mas[i][n] == 1){
						flagleft = 1;
					}
				}
				
				for(n = j; n < lenght; n++){
					if(mas[i][n] == 1){
						flagright = 1;
					}
				}
			}
			
			if(flagright == 1 && flagleft == 1){
				mas[i][j] = 2;
			}
		}
	}
	
	for(i = 14; i >= 0; i--){
		for(j = 0; j < lenght; j++){
			switch(mas[i][j]){
				
				case(0):
				printf(" ");
				break;
				
				case(1):
				printf("#");
				break;
				
				case(2):
				printf("*");
				osadki++;
				break;
			}
		}
		printf("\n");
	}
	
	printf("Кол-во воды = %d\n", osadki);
	
	return 0;
	
}
			
