#include <stdio.h>

int main(void)
{
	int n;

	printf("���� �Է� : ");
	scanf("%d", &n);

	switch (n % 3)
	{
	case 0:
		printf("����");
		break;
	default:
		printf("��");
		break;
	}

	return 0;
}