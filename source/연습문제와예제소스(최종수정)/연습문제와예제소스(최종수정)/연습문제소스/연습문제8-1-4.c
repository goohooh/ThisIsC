#include <stdio.h>

int main(void)
{
	int A[3] = {1, 2, 3};
	int B[10];
	int i;

	for (i = 0; i < 10; i++)      // B �迭�� ä��Ƿ� B �迭 ����� ����ŭ �ݺ�
	{
		B[i] = A[i % 3];          // A �迭�� ÷�ڰ� 0~2�� ���� ������ ������ ������ ���
	}

	for (i = 0; i < 10; i++)
	{
		printf("%5d", B[i]);      // B �迭 ���
	}

	return 0;
}