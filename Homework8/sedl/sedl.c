#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int i, j, p;
	int mass[2][2];
	int minel, maxel, minnum, maxnum;
	
	srand(time(NULL));
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			mass[i][j] = rand()%10;
		}
	}
	
//	for(j = 0; j < 4; j++){
//		scanf("%d", &mass[3][j]);
//	}
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%2d", mass[i][j]);
		}
		printf("\n");
	}
	
	minel = 10000;
	maxel = 0;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			if(mass[i][j] < minel){
				minel = mass[i][j];
				minnum = j;
			}
		}
		for(p = 0; p < 2; p++){
			if(mass[p][minnum] > maxel){
				maxel = mass[p][minnum];
				maxnum = p;
			}
		}
		if(minel == maxel){
			maxnum++;
			minnum++;
			printf("(%d, %d)- седловая точка со значением - %d\n",
			maxnum, minnum, minel);
		}
		minel = 10000;
		maxel = 0;
	}
	
	return 0;
}
