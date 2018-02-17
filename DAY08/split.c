#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const **argv)
{
	FILE * fp, *ofp;
	int ch;
	char str[80];
	int res;
	int kor, eng, mat, tot;
	char name[20];
	double avg;

	fp = fopen(argv[1], "r");
	ofp = fopen("result.txt", "w");

	if(fp == NULL){
		printf("파일 없음\n");
		exit(1);
	}

	while( fgets(str, sizeof(str), fp) != NULL){
		sscanf(str, "%s %d %d %d", name, &kor, &eng, &mat);
		// res = fscanf(fp, "%s %d %d %d", name, &kor, &eng, &mat);
		// if(res == -1) { break; }
		tot = kor + eng + mat;
		avg = tot / 3.0;
		fprintf(ofp, "%s %5d %5d %5d %5d %7.1lf\n", name, kor, eng, mat, tot, avg);
	}


	fclose(fp);
	fclose(ofp);

	return 0;
}