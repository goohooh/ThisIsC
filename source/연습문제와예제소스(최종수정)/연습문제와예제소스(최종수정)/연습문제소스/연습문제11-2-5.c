#include <stdio.h>

int main(void)
{
	char ch;                        // ���� �Է� ����
	int cnt = 0;                    // ���๮���� ������ ������ ����

	while (scanf("%c", &ch) != -1)  // scanf �Լ��� Ctrl +Z Ű�� ������ -1�� ��ȯ�Ѵ�.
	{
		if (ch == '\n') cnt++;      // �Է��� ���ڰ� ���๮�ڸ� ���� ����
	}
	printf("���� Ű�� ���� Ƚ�� : %d\n", cnt);

	return 0;
}