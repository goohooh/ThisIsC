#include <stdio.h>
#include <string.h>

void swap(char *, void *, void *);

int main(void){

	int age1, age2;
	float height1, height2;
	
	printf("첫 번째 사람의 나이와 키 입력 : ");
	scanf("%d %f", &age1, &height1);
	printf("두 번째 사람의 나이와 키 입력 : ");
	scanf("%d %f", &age2, &height2);

	swap("int", &age1, &age2);
	swap("float", &height1, &height2);

	printf("\n첫 번째 사람의 나이와 키 %d, %f\n",age1, height1 );
	printf("두 번째 사람의 나이와 키 %d, %f\n",age2, height2 );

	return 0;
}

void swap(char *pary, void *a, void *b){
	int i;
	float f;
	int res;

	res = strcmp("int", pary);
	if(res == 0){
		i = *(int *)a;
		*(int *)a = *(int *)b;
		*(int *)b = i;
	} else {
		f = *(float*)a;
		*(float*)a = *(float*)b;
		*(float*)b = f;
	}

}