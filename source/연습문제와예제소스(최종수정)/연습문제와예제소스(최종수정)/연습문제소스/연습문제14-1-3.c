#include <stdio.h>

int main(void)
{
	int ary[4][5];                      // 2���� int�� �迭 ����
	int i, j, cnt = 1;                  // cnt�� �迭�� ������ ��

	for (i = 0; i < 4; i++)             // ���� ��
	{
		for (j = 0; j < 5; j++)         // ���� ��
		{
			ary[i][j] = cnt++;          // 1���� ������Ű�鼭 �迭 ��ҿ� ����
		}
	}

	for (i = 0; i < 4; i++)             // 4��
	{
		for (j = 0; j < 5; j++)         // 5��
		{
			printf("%5d", ary[i][j]);   // 5ĭ�� �ڸ���� ���
		}
		printf("\n");                   // �� ���� ��µǸ� �� �ٲ�
	}

	return 0;
}