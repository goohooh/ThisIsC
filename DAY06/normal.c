#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(void *pa, void *pb, int size);


int main(int argc, char const *argv[])
{
	int a = 10, b = 20;
	double da = 3.4, db = 1.5;

	printf("a:%d, b:%d\n", a, b);
	printf("da:%.1lf, db:%.1lf\n", da, db);
	swap(&a, &b, sizeof(int));
	swap(&da, &db, sizeof(double));
	printf("a:%d, b:%d\n", a, b);
	printf("da:%.1lf, db:%.1lf\n", da, db);
	return 0;
}

void swap(void *pa, void *pb, int size){
	void *pt = malloc(size);
	memcpy(pt, pa, size);
	memcpy(pa, pb, size);
	memcpy(pb, pt, size);
	free(pt);
}