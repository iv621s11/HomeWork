#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char mass[30] = {0};
	char ch;
	
	int i, j, f = 0;
	
	i = 0;
	
	while((ch = getchar()) != '\n'){  //Считывание сстроки до нажатия Enter
		if(isalpha(ch)){
			mass[i] = tolower(ch);
			i++;
		}
	}
	
	j = strlen(mass);  //j = длина введенной строки
	
	for(i = 0; i < j; i++){	
		if(mass[i] != mass[j - 1]){
			f = 1;
			printf("Эта фраза не палиндром\n");
			break;
		}else{
			j--;
		}
	}
	
	if(f == 0){
		printf("Эта фраза палиндром\n");
	}
}
