#include <stdio.h>

int main(void)
{
	char fruit[20];
	int cnt;

	printf("�����ϴ� ���� : ");
	scanf("%s", fruit);
	printf("�� �� : ");
	scanf("%d", &cnt);
	printf("%s�� %d�� �帳�ϴ�.", fruit, cnt);

	return 0;
}