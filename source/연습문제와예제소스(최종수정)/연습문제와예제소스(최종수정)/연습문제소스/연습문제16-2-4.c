#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pa[3], *pb[3], *pc[3];                  // ����� �� ���� ������ ������ �迭
	int i, j;

	for (i = 0; i < 3; i++)                      // 3���� 2���� �迭�� �������� �����.
	{
		pa[i] = (int *)malloc(4 * sizeof(int));
		pb[i] = (int *)malloc(4 * sizeof(int));
		pc[i] = (int *)malloc(4 * sizeof(int));
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			pa[i][j] = i * 4 + j + 1;            // 2���� ��Ŀ� �� �ʱ�ȭ
			pb[i][j] = 12 - (i * 4 + j);
			pc[i][j] = pa[i][j] + pb[i][j];      // �� ����� ���� 3��° ��Ŀ� ����
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pc[i][j]);             // 3��° ����� �� ���
		}
		printf("\n");                            // �� ���� ����� �Ŀ� �� �ٲ�
	}

	return 0;
}