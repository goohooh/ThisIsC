#include <stdio.h>

int main(void)
{
	int centi;
	double inch;

	centi = 2 * 100;         // ���͸� ��Ƽ���ͷ� ȯ��
	inch = centi / 2.54;     // ��Ƽ���͸� ��ġ�� ȯ��, 1��ġ�� 2.54��Ƽ����
	printf("2���ʹ� %.1lf��ġ�Դϴ�.\n", inch);

	return 0;
}