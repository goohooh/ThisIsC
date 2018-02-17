#include <stdio.h>

void reverse(double *pa, int size);

int main(void)
{
	double ary[] = {1.5, 20.1, 16.4, 2.3, 3.5};
	int i;

	reverse(ary, sizeof(ary) / sizeof(*ary));
	for(i = 0; i < 5; i++)
	{
		printf("%5.1lf", ary[i]);
	}
	printf("\n");

	return 0;
}

void reverse(double *pa, int size)  // �迭��� �迭 ��� ���� ����
{
	int i;                          // �ݺ� ���� ����
	double temp;                    // �迭 ����� ���� �ٲ� �� �ʿ��� �ӽ� ����

	for (i = 0; i < size / 2; i++)  // �¿��� ���� �ٲٴ� Ƚ���� �迭 ��� ���� ����
	{
		temp = pa[i];               // ������ �迭 ��Ҹ� �ӽ� ������ ����
		pa[i] = pa[size - 1 - i];   // ������ �迭 ��ҿ� �������� �迭 ��� ����
		pa[size - 1 - i] = temp;    // �������� �迭 ��ҿ� �ӽ� ������ �� ����
	}
}
