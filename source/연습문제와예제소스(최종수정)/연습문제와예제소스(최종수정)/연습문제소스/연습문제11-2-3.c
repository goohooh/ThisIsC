#include <stdio.h>

int main(void)
{
	int ch;          // ���ڸ� �Է��� ����
	int cnt = 0;     // �ҹ����� ������ �� ����

	ch = getchar();
	while (ch != '\n')
	{
		if ((ch >= 'a') && (ch <= 'z')) cnt++;
		ch = getchar();
	}
	printf("�ҹ����� ���� : %d\n", cnt);

	return 0;
}