#include <stdio.h>

int main(void)
{
	FILE *fp;                    // ���� ������
	int ch;                      // ���Ͽ��� ���� ���� ����
	int cnt = 0;                 // ��µ� �� �� ����

	fp = fopen("a.txt", "r");    // �б� �������� ���� ����
	if (fp == NULL)              // ���� ���θ� Ȯ��
	{
		printf("������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	while (1)
	{
		ch = fgetc(fp);          // ���Ͽ��� ���� �Է�
		if (ch == EOF)           // ������ ���̸� �ݺ� ����
		{
			break;
		}
		putchar(ch);             // ȭ�鿡 ���� ���
		if (ch == '.')           // ��ħǥ�� �ԷµǸ�
		{
			putchar('\n');       // �� �ٲٱ�
			cnt++;               // ���� �ٲ� ������ �� �� ����
			if ((cnt % 2) == 0)  // 2�ٸ��� �� �� ���
			{
				putchar('\n');
			}
		}
	}
	fclose(fp);                  // ���� ����

	return 0;
}