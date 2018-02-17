#include <stdio.h>

void exchange(double *, double *);                            // ��ȯ �Լ� ����
void func(void(*fp)(double *, double *), double, double);     // ��ȯ �Լ� ����

int main(void)
{
	double a = 10, b = 20;                                    // ���� ����� �ʱ�ȭ

	func(exchange, a, b);                                     // �Լ��� ��ȯ�� ���� �ְ� ȣ��

	return 0;
}

void func(void(*fp)(double *, double *), double a, double b)  // �Լ� ������
{
	printf("a:%.1lf, b:%.1lf\n", a, b);                       // �ٲٱ� ���� �� ���
	fp(&a, &b);                                               // �Լ� �����ͷ� ��ȯ �Լ� ȣ��
	printf("a:%.1lf, b:%.1lf\n", a, b);                       // �ٲ� ���� �� ���
}

void exchange(double *pa, double *pb)                         // func �Լ��� �Ű����� a, b�� �� ��ȯ
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}