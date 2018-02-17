#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	// 파일을 읽고 쓰기 위해선
	// 파일포인터를 무조건 선언해야함
	FILE * fp;
	char ch;

	// * 스트림파일 *
	// 파일 입출력에서 말하는 파일의 개념 : 파일을 가지고 오는 곳
	// 예시로 모니터도, 키보드도 마우스도 파일이라고 할 수 있다.
	// int a,b; a = 10; b = a;
	// b 입장에서 a는 입력파일, a입장에서 b는 출력 파일

	fp = fopen("./text.txt", "r");
	if(fp == NULL){
		printf("파일 없음\n");
		exit(1);
	}
	printf("파일이 열렸습니다.\n");

	ch = fgetc(fp);
	while(ch != EOF){
		printf("%c", ch);
		ch = fgetc(fp);
	}

	fclose(fp);

	return 0;
}