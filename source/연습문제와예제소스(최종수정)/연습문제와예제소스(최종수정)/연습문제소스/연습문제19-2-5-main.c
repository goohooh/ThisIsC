#include <stdio.h>

void input_score(int *, int *, int *);  // �� ������ ������ �Է��ϴ� �Լ�
int total(int, int, int);               // ������ ���ϴ� �Լ�
double grade(int);                      // ��հ� ������ ���ϴ� �Լ�
char grd;                               // ������ ������ ���� ����

int main(void)
{
	int kor, eng, mat, tot;             // ����, ����, ����, ������ ������ ����
	double avg;                         // ����� ������ ����

	input_score(&kor, &eng, &mat);      // �Է� �Լ� ȣ��
	tot = total(kor, eng, mat);         // total �Լ��� ȣ���Ͽ� ���� ��ȯ
	avg = grade(tot);                   // ����� ��ȯ�ϰ� ������ ���� ������ ����
	printf("��� : %.1lf, ���� : %c", avg, grd); // ����� ���

	return 0;
}