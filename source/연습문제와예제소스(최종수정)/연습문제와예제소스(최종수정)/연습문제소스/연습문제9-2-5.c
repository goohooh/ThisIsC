#include <stdio.h>

void assign(int *p);

int main(void)
{
	int a = 0;

	assign(&a);
	printf("%d", a);

	return 0;
}

void assign(int *p)   // main �Լ��� ���� a�� �ּҸ� ���� ������ ����
{
	*p = 10;          // p�� ����Ű�� main �Լ��� ���� a�� 10 ����
}