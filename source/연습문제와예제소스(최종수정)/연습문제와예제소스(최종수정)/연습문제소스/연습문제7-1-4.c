#include <stdio.h>

int my_power(int base, int exp);   // �Լ� ����

int main(void)
{
	int res;                       // ��ȯ���� ������ ����

	res = my_power(2, 10);         // �ؼ��� ������ �ְ� �Լ� ȣ��
	printf("%d\n", res);           // ��ȯ���� ���

	return 0;
}

int my_power(int base, int exp)    // �ؼ��� ������ �Ű������� ����
{
	int res = 1;                   // �ؼ��� ���Ͽ� �����ϱ� ���� 1�� �ʱ�ȭ
	int i;

	for (i = 0; i < exp; i++)      // ������ŭ �ݺ�
	{
		res *= base;               // �ؼ��� res�� ���Ͽ� �����Ѵ�.
	}

	return res;                    // ������ ����� ��ȯ
}