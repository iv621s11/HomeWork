#include <stdio.h>
#include <math.h>

int main()
{
	float l, o, g, i, c, temp;
	
	printf("\n(L + O + G + I + C) ^ 3 = LOGIC\n\n");
	
	for(l = 0; l < 10; l++){
		for(o = 0; o < 10; o++){
			for(g = 0; g < 10; g++){
				for(i = 0; i < 10; i++){
					for(c = 1; c < 10; c++){
						temp = (l * 10000) + (o * 1000) + (g * 100) + (i * 10) + c;
						if(temp == powf((l + o + g + i + c), 3)){
							printf("%5.0f\n", temp);
						}
					}
				}
			}
		}
	}
	
	printf("\nC ^ L = LOGIC\n\n");
	
	for(l = 0; l < 10; l++){
		for(o = 0; o < 10; o++){
			for(g = 0; g < 10; g++){
				for(i = 0; i < 10; i++){
					for(c = 1; c < 10; c++){
						temp = (l * 10000) + (o * 1000) + (g * 100) + (i * 10) + c;
						if(temp == powf(c, l)){
							printf("L = %5.0f\tC = %5.0f\ttemp = %5.0f\n", l, c, temp);
						}
					}
				}
			}
		}
	}
	
	printf("\n(DD) ^ E = DEED\n\n");
	
	float d, e;
	
	for(d = 0; d < 10; d++){
		for(e = 0; e < 10; e++){
			temp = (d * 1000) + (e * 100) + (e * 10) + d;
			if(temp == powf((d * 10 + d), e)){
				printf("D = %5.0f\tE = %5.0f\ttemp = %5.0f\n\n", d, e, temp);
			}
		}
	}
}
