#include <stdio.h>

int prime_check(int n);                     // �Լ� ����

int main(void)
{
	int res;                                // �Լ��� ��ȯ���� ������ ����

	res = prime_check(32767);               // 32767�� �ְ� �Լ� ȣ��
	if (res == 1) printf("�Ҽ��Դϴ�.\n");  // ��ȯ���� 1�̸� �Ҽ�
	else printf("�Ҽ��� �ƴմϴ�.\n");

	return 0;
}

int prime_check(int n)                      // �Լ� ����
{
	int i;

	for (i = 2; i < n; i++)                 // i�� ���� 2���� n-1���� ����
	{
		if ((n % i) == 0) return 0;         // ���� ������ ������ �� 0 ��ȯ
	}

	return 1;                               // for������ ��ȯ���� �ʰ� �ݺ��� ��� ������ ����
}                                           // �� ���� ������ �������� ���� ���̹Ƿ� �Ҽ���