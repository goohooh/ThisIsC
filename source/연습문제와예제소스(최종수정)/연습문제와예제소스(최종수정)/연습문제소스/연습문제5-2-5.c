#include <stdio.h>

int main(void)
{
	int age = 25, chest = 95;
	char size;

	if (age < 20)                          // ���̰� 20 �̸��̸�
	{
		if (chest < 85) size = 'S';        // 20�� �̸� chest ���� ���� ����� ����
		else if (chest < 95) size = 'M';
		else size = 'L';
	}
	else                                   // ���̰� 20���� ũ�ų� ������
	{
		if (chest < 90) size = 'S';        // 20�� �̻� �������� ����� ����
		else if (chest < 100) size = 'M';
		else size = 'L';
	}
	printf("������� %c�Դϴ�.\n", size);  // ������ ������ ���

	return 0;
}