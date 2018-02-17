#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const **argv)
{
	// 개방하고자 하는 파일 갯수 만큼 파일 포인터 선언
	FILE * fp, *ofp;
	char ch;

	fp = fopen(argv[1], "r");

	// write 모드로 없는 파일을 넣으면 NULL포인터 반환이 아닌 파일을 생성해서 개방
	// 있는 파일을 개방한다면 먼저 그 파일의 내용을 다 삭제(읽을 수 없는 상태)
	ofp = fopen(argv[2], "w");
	// 공간이 없을 수도, 어떠한 이유로 실패할 수도 있다.

	if(fp == NULL){
		printf("파일 없음\n");
		exit(1);
	}
	printf("파일이 열렸습니다.\n");

	ch = fgetc(fp);
	while(ch != EOF){
		// printf("%c", ch);
		fputc(ch,ofp);
		ch = fgetc(fp);
	}


	fclose(fp);
	fclose(ofp);

	return 0;
}