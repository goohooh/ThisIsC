#include <stdio.h>

int main(void)
{
	int kor = 70, eng = 80, mat = 90;   // �� ������ ���� ����� �ʱ�ȭ
	int tot;                            // ������ ������ ���� ����

	tot = kor + eng + mat;              // �� ������ ���� ���� ���� ������ ����
	printf("���� : %d, ���� : %d, ���� : %d\n", kor, eng, mat);  // ���� ���
	printf("���� : %d", tot);           // ���� ���

	return 0;
}