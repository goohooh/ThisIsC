#include <stdio.h>

int main(void)
{
	char ani[20];
	char why[80];

	printf("�����ϴ� ���� : ");
	scanf("%s", ani);
	fflush(stdin);

	printf("�����ϴ� ���� : ");
	fgets(why, sizeof(why), stdin);
	printf("%s is %s", ani, why);

	return 0;
}