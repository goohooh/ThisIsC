#include <stdio.h>
#include <string.h>

int main(void)
{
	char fruit[5][20];           // ���� �̸��� �Է��� �迭
	int i, len;
	int max = 0;                 // ���̰� ���� �� ���� �̸��� ����
	int index = 0;               // ���̰� ���� �� ���� �̸��� �迭�� ��ġ

	printf("5���� ���� �̸� �Է� : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%s", fruit[i]);   // ���� �̸� �Է�
	}

	for (i = 0; i < 5; i++)
	{
		len = strlen(fruit[i]);  // ���� �̸��� ���� ���
		if (len > max)           // ������ �ִ� ���̺��� ũ��
		{
			max = len;           // �ִ� ���̷� �ϰ�
			index = i;           // �� ��ġ�� index�� ���
		}
	}
	printf("���̰� ���� �� ���� �̸��� %s�Դϴ�.", fruit[index]); // ���

	return 0;
}