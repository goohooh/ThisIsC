#include <stdio.h>

int main(void)
{
	char *pary[] = {"����", "����", "��"};
	int n;

	while (1)
	{
		printf("���� �Է� : ");
		scanf("%d", &n);
		if (n < 0) break;
		printf("%s\n", pary[(n - 1) % 3]);
	}

	return 0;
}