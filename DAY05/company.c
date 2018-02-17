#include <stdio.h>

int main(void){

	int a[4] = { 1, 2, 3, 4};
	int b[4] = { 10, 20, 30, 40};
	int c[4] = { 11, 12, 13, 14};
	int *pa[3];
	int i,j;

	pa[0] = a;
	pa[1] = b;
	pa[2] = c;

	for(i=0;i < 3; i++){
		for(j=0;j < 4;j++){
			printf("%5d", pa[i][j] );
		}
		printf("\n");
	}

	return 0;
}