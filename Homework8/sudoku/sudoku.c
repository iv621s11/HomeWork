#include <stdio.h>

int main()
{
		
	
	int i, n, j;
	int m, k;
	FILE *file;
	
	int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0;
	int seven = 0, eight = 0, nine = 0;
	
	printf("Введите размер судоку: ");
	scanf("%d", &n);
	
	int sud[n * n][n * n];
	
	file = fopen("sud.txt", "r");
	
	for(i = 0; i < (n * n); i++){
		for(j = 0; j < (n * n); j++){
			fscanf(file, "%d", &sud[i][j]);
		}
	}
	
	fclose(file);
	
	for(i = 0; i < n * n; i++){
		for(j = 0; j < n * n; j++){
			printf("%2d", sud[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < (n * n); i++){
		for(j = 0; j < (n * n); j++){
			switch(sud[i][j]){
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
		if((one =! 1) || (two =! 1) || (three =! 1) || (four =! 1) || (five =! 1) || (six =! 1) || (seven =! 1) || (eight =! 1) || (nine =! 1)){
			printf("incorrect\n");
			return 0;
		}
		one = 0;
		two = 0;
		three = 0;
		four = 0;
		five = 0;
		six = 0;
		seven = 0;
		eight = 0;
		nine = 0;
	}
	
	for(j = 0; j < (n * n); j++){
		for(i = 0; i < (n * n); i++){
			switch(sud[i][j]){
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
if((one =! 1) || (two =! 1) || (three =! 1) || (four =! 1) || (five =! 1) || (six =! 1) || (seven =! 1) || (eight =! 1) || (nine =! 1)){
			printf("incorrect\n");
			return 0;
		}
		one = 0;
		two = 0;
		three = 0;
		four = 0;
		five = 0;
		six = 0;
		seven = 0;
		eight = 0;
		nine = 0;
	}
	for(m = 1; m < n + 1; m++){
		for(k = 1; k < n + 1; k++){
			one = 0;
			two = 0;
			three = 0;
			four = 0;
			five = 0;
			six = 0;
			seven = 0;
			eight = 0;
			nine = 0;
			for(i = 0; i < n; i++){
				for(j = 0; j < n; j++){
					switch(sud[m * i][k * j]){
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
			}
			if((one =! 1) || (two =! 1) || (three =! 1) || (four =! 1) || (five =! 1) || (six =! 1) || (seven =! 1) || (eight =! 1) || (nine =! 1)){
			printf("incorrect\n");
			return 0;
			}
		}
	}
	printf("all good\n");
	return 0;
}
