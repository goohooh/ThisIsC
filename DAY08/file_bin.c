#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const **argv)
{
	FILE * fp, *ofp;
	// char ch;바이너리를 카피하고자 한다면?
	int ch;
	char str[80];
	char * resp;

	fp = fopen(argv[1], "r");
	// fp = fopen(argv[1], "rb"); // -> 윈도우만

	// fp = fopen(argv[1], "w");
	// ofp = fopen(argv[2], "wb"); // -> 윈도우만

	if(fp == NULL){
		printf("파일 없음\n");
		exit(1);
	}
	printf("파일이 열렸습니다.\n");

	// ch = fgetc(fp);
	// 한줄 씩
	// fgets(str, sizeof(str), fp);
	// str[strlen(str)-1] = '\0';
	while(1){
		// printf("%c", ch;
		// fputc(ch,ofp);
		// ch = fgetc(fp);
		resp = fgets(str, sizeof(str), fp);
		if(resp == NULL) { break; }
		// str[strlen(str)-1] = '\0';
		// printf("%s", str);
		fputs(str, stdout);
	}


	fclose(fp);
	// fclose(ofp);

	return 0;
}