#include <stdio.h>

int main(void)
{
	double height = 179.5;   // Ű�� ������ ���� ����� �ʱ�ȭ
	double weight = 75.0;    // �����Ը� ������ ���� ����� �ʱ�ȭ

	if ((height >= 187.5) && (weight < 80.0))   // Ű�� 187.5 �̻��̰�
	{                                           // �����԰� 80 �̸��̸�
		printf("ok\n");                         // ok ���
	}
	else                                        // �� �̿��� ���
	{
		printf("cancel\n");                     // cancel ���
	}

	return 0;
}