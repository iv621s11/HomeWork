#include <stdio.h>

int main()
{
	int i;
	char a;
	a = '\0';
			printf("Oct\tDec\tHex\tChar\n");
	for(i = 0; i < 128; i++){
		printf("%o\t%d\t%x\t%c\n", a, a, a, a);
		a++;
	}
	return 0;
}
