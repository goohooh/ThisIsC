#include <stdio.h>

int main(void)
{
	int num;
	char alpha;

	printf("���� �����ϴ� ���ڴ�? ");
	scanf("%d", &num);
	fflush(stdin);        // ���ڸ� �Է��� �Ŀ� ���ۿ� ���� �ִ� ���๮�ڸ� �����Ѵ�.
	printf("���� �����ϴ� ���ĺ���? ");
	alpha = getchar();
	printf("%d, %c\n", num, alpha);

	return 0;
}