#include <stdio.h>

double get_next(void);
double ary[] = {0.1, 0.3, 0.5, 0.7, 0.9};

int main(void)
{
	double res = 0;
	int i;

	for (i = 0; i < 5; i++)
	{
		res += get_next();
	}
	printf("%.1lf", res);

	return 0;
}

double get_next(void)
{
	static int index = 0;   // ary �迭�� index�� ����� ����, static ��� �ʼ�
	double val;             // ary �迭 ����� ���� ��� �����ϱ� ���� ����

	val = ary[index];       // index ��ġ�� �迭 ��Ҹ� val�� ����
	index++;                // get _next�� ������ ȣ��� �� ���� �迭 ��Ҹ� ��ȯ�ϱ� ���� index ����

	return val;             // ��� ������ �迭 ����� �� ��ȯ
}