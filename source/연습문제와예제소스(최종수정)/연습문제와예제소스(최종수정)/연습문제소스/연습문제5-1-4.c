#include <stdio.h>

int main(void)
{
	int a = 10, b = 3;
	int res;

	if (a > b)                    // a�� b���� ũ��
	{
		res = a / b;              // a, b�� ��� �����̹Ƿ� �� ���
	}
	else                          // �׷��� ������(a�� b���� �۰ų� ������)
	{
		res = a % b;              // a�� b�� ���� ������ ���
	}
	printf("��� : %d\n", res);   // ���� ����� ���

	return 0;
}