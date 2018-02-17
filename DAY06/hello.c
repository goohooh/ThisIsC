#include <stdio.h>
#include <string.h>

void init_intro(char (*intro)[80], char **intp);
int input_intro(char (*intro)[80]);
void sort_intro(char **intp, int cnt);
void print_intro(int mode, void *vp, int cnt);

int main(void){

	char intro[10][80];
	char *intp[10];
	int cnt;

	init_intro(intro, intp);
	cnt = input_intro(intro);

	return 0;
}
void init_intro(char (*intro)[80], char **intp){
	int i;

	for(i = 0; i < 10;i++){
		intp[i] = intro[i];
	}
}
int input_intro(char (*intro)[80]){
	cahr temp[80];
	int cnt = 0;

	while(1){
		printf("인사말 입력 : ");
		gets(temp);
		if(strcmp(temp, "end") == 0) break;
		strcpy(intro[cnt], temp);
		cnt++
	}
	return cnt;
}
void sort_intro(char **intp, int cnt){
	// selection sort
	int i,j;
	char *tp;

}
void print_intro(int mode, void *vp, int cnt){
	int i;

	
	for(i=0;i < cnt;i++){
		printf("%s\n", );
	}
}
