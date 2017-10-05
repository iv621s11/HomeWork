#include <stdio.h>
#include <ctype.h>

int main()
{
	int alpha = 0, digits = 0, marks = 0;
	float percent, i, counter = 0;
	char c;
	
	while((c = getchar()) != EOF) {
		++counter;
		
		switch(c){
			case('a'):
			case('e'):
			case('o'):
			case('i'):
			case('u'):
			case('y'):
				++alpha;
				break;
		}
		
		if(ispunct(c)){
			marks++;
		}
		
		if(isdigit(c)){
			digits++;
		}
		
		if(isalpha(c)){
			i++;
		}
	}
	
	printf("\nКол-во гласных: %d\nКол-во цифр: %d\nКол-во знаков препинания: %d\n", alpha, digits, marks);
	
	percent = (i/counter) * 100;
	
	printf("Буквы состовляют %.2f% от введенных данных.\n", percent);
	
	return 0;
}
