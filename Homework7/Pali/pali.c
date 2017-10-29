#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char mass[30];
	char ch;
	
	int i, j,f = 0;
	
	while((ch = getchar()) != EOF){
		mass[i] = ch;
		i++;
	}
	
	j = strlen(mass);
	printf("j = %d\n", j);

	for(i = 0; i < 30; i++){
		printf("%c  ", mass[i]);
	}
	
	printf("\n\n");

	for(i = 0; i < j; i++){
		printf("%c  ", mass[i]);
	}
	//
	for(i = 0; i < j; i++){	
		if(mass[i] != mass[j - 2]){
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
