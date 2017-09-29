#include <stdio.h>
#include <ctype.h>

int main()
{
	char input;
	int i, l, k, z;
	
	int mas[26];
	mas[0] = 'A';
	for(i = 1;i < 26;i++){
			mas[i] = mas[0] + i;
	}
	
	printf("Введите последнюю букву: ");
	scanf("%c", &input);
	
	if(isupper(input)){
	for(i = 1; i < 27; i++){
			if(input == mas[i - 1]){
				z = i;
			}
		}
		
		for(i = 1; i <= z; i++){
			l = 1;
			for(k = i;k < z;k++){
				printf(" ");
			}
			while(l < i){
				printf("%c", mas[l - 1]);
				l++;
			}
			while(l == i){
				printf("%c", mas[l - 1]);
				l--;
			}
			while(l > 0){
				printf("%c", mas[l - 1]);
				l--;
			}
			printf("\n");
		}
	}else{
		printf("ВВодите только заглавные буквы!!!\n");
	}	

	return 0;

}
