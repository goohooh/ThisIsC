#include <stdio.h>

int main(void)
{
	int tot = 259;          // ���� �ʱ�ȭ
	double avg;             // ����� ������ ����
	char grade;             // ������ ������ ����

	avg = tot / 3.0;        // ��� ���
	if (avg >= 90.0)        // ����� 90�� �̻��̸� A ����
	{
		grade = 'A';
	}
	else if (avg >= 80.0)   // ����� 90�� �̸� 80�� �̻��̸� B ����
	{
		grade = 'B';
	}
	else if (avg >= 70.0)   // ����� 80�� �̸� 70�� �̻��̸� C ����
	{
		grade = 'C';
	}
	else                    // �� �ܴ� F ����
	{
		grade = 'F';
	}
	printf("��� : %.1lf, ���� : %c\n", avg, grade); // ���� ��հ� ���� ���

	return 0;
}