#include <stdio.h>

void input_str(char(*)[80]);   // �迭�� ���ڿ��� �Է��ϴ� �Լ�
void print_str(char(*)[80]);   // �迭�� ���ڿ��� ����ϴ� �Լ�

int main(void)
{
	char str[5][80];           // char 2���� �迭 ����

	input_str(str);            // �迭���� �ְ� �Է� �Լ� ȣ��
	print_str(str);            // �迭���� �ְ� ��� �Լ� ȣ��

	return 0;
}

void input_str(char(*ps)[80])  // �Ű������� �迭 ������
{
	int i;

	printf("�ټ� ���� ������ �Է��ϼ���.\n");
	for (i = 0; i < 5; i++)
	{
		gets(ps[i]);           // ps[i]�� �κй迭������ �� ���� ���� ��ġ
	}
}

void print_str(char(*ps)[80])
{
	int i;

	printf("�Էµ� ������...\n");
	for (i = 0; i < 5; i++)
	{
		puts(ps[i]);
	}
}