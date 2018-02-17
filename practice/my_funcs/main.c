#include <stdio.h>
#include <string.h>

void my_gets(char *str, int size);

int main(void){
	char str[7];

	my_gets(str, sizeof(str));
	printf("input string : %s\n", str);

	return 0;
}

void my_gets(char *str, int size){
	char ch;
	int i = 0;

	ch = getchar();

	while((ch != '\n') && (i < size -1)){
		str[i] = ch;
		i++;
		ch = getchar();
	}

	str[i] = '\0';
}