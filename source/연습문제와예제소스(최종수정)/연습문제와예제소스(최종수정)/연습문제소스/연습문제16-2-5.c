#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)    // ����� �μ��� ���� �Ű����� ���
{
	int i;
	int count;                     // �ݺ� Ƚ�� ����

	if (argc < 3)                  // ����� �μ��� ������ ���� ��� �˻�
	{
		printf("���α׷� ���� �����Դϴ�.\n");
		printf("���� : string_print ���ڿ� �ݺ�Ƚ��\n");
		exit(1);
	}
	count = atoi(argv[2]);         // ���ڿ��� �� �ݺ� Ƚ���� ������ ��ȯ
	for (i = 0; i < count; i++)
	{
		printf("%s\n", argv[1]);   // ����� �μ��� �Ѿ�� ���ڿ� ���
	}

	return 0;
}