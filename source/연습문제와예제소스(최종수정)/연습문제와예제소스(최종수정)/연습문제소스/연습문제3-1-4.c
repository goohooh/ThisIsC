#include <stdio.h>

int main(void)
{
	double avg;                     // ����� ������ double�� ����
	char grade;                     // ������ ������ char�� ����

	avg = 84.5;                     // ��� ����
	grade = 'B';                    // ���� ����
	printf("��� : %.1lf\n", avg);  // ��� ���
	printf("���� : %c", grade);     // ���� ���

	return 0;
}