#include <stdio.h>

int main()
{
	int i, j, temp;
	int mass[25] = {0};
	
	printf("Введите набор цифр");
	
	for(i = 0; i < 25; i++){
		scanf("%d", &mass[i]);
		if(mass[i] == '\0'){
			break;
		}
	}
	
	for(i = 0; i < 25; i++){
		for(j = i; j > 0; j--){
			if(mass[j - 1] > mass[j]){
				temp = mass[j - 1];
				mass[j - 1] = mass[j];
				mass[j] = temp;
			}
		}
	}
	
	for(i = 0; i < 25; i++){
		if(mass[i] != 0){
			printf("%d  ", mass[i]);
		}
	}
	
	return 0;
}
