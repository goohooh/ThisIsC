#include <stdio.h>

int main(void)
{
	double ary[5] = {1.0, 2.1, 3.2, 4.3, 5.4};    // double �迭 ����� �ʱ�ȭ
	int i;                                        // �ݺ� ���� ����

	for (i = 0; i < 5; i++)                       // �迭 ��� ����ŭ �ݺ�
	{
		printf("%6.1lf", ary[4 - i]);             // ÷�ڸ� 4���� 1�� �����ϸ鼭 ���
	}

	return 0;
}