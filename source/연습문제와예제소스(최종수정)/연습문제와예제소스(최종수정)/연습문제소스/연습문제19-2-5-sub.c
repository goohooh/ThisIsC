#include <stdio.h>                    // printf���� ���ǹǷ� ��� ���� ����

extern char grd;                      // �ٸ� ������ ���� ���� ���

void input_score(int *kor, int *eng, int *mat)  // �Է� �Լ�
{
	printf("�� ������ ������ �Է� �ϼ��� : ");
	scanf("%d %d %d", kor, eng, mat);
}

int total(int kor, int eng, int mat)  // ������ ���ϴ� �Լ�
{
	int tot;                          // ������ ������ ����

	tot = kor + eng + mat;            // ���� ���

	return tot;                       // ���� ��ȯ
}

double grade(int tot)                 // ����� ��ȯ�ϰ� ������ ���� ������ ����
{
	double avg;                       // ����� ������ ����

	avg = tot / 3.0;                  // ��� ���
	if (avg >= 90.0) grd = 'A';       // ����� 90�� �̻��̸� A�� grd�� ����
	else if (avg >= 80.0) grd = 'B';  // 80�� �̻��̸� B
	else if (avg >= 70.0) grd = 'C';  // 70�� �̻��̸� C
	else grd = 'F';                   // �� �ܿ��� ��� F

	return avg;                       // ��� ��ȯ
}