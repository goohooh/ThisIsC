#include <stdio.h>

int quot(int a, int b, int *p);

int main(void)
{
	int a, b, res;

	printf("�� ���� �Է� : ");
	scanf("%d %d", &a, &b);
	if (quot(a, b, &res) == -1)      // ���� ���ϴ� �Լ� quot ȣ��
	{
		printf("0���� ���� �� �����ϴ�!");
	}
	else
	{
		printf("%d�� %d�� ���� ���� %d�Դϴ�.", a, b, res);
	}

	return 0;
}

int quot(int a, int b, int *p)
{
	if (b == 0)                      // ������ ���� 0�̸�
	{
		return -1;                   // -1�� ��ȯ�Ͽ� ���� ��Ȳ�� �˸�
	}
	else                             // ������ ���� 0�� �ƴϸ�
	{
		*p = a / b;                  // ���� ���� p�� ���� main �Լ��� res�� ����
		return 0;                    // -1�� �ƴ� �� ��ȯ
	}
}