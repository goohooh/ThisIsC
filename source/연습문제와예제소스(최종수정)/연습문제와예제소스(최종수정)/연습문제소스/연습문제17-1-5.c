#include <stdio.h>

struct student                               // �л� ����ü
{
	int num;                                 // �й�
	char name[20];                           // �̸�
	int score[5];                            // ���� �迭
	double avg;                              // ���
};
struct student print_avg(struct student s);

int main(void)
{
	struct student s1                        // ����ü ������ ����� �ʱ�ȭ
		= { 315, "ȫ�浿", {82, 93, 74, 90, 65} };

	s1 = print_avg(s1);                      // ����ü ���� ����, ��ȯ�� ����
	printf("��� : %.1lf\n", s1.avg);        // �Լ��� ����� ��� ���

	return 0;
}

// ����ü ������ �����͸� ����ϰ� ��� ���
struct student print_avg(struct student s)   // �Ű������� ��ȯ���� ��� ����ü
{
	int i, sum = 0;

	printf("�й� : %d\n", s.num);
	printf("�̸� : %s\n", s.name);
	printf("���� : ");

	for (i = 0; i < 5; i++)
	{
		printf("%5d", s.score[i]);           // �迭 ����� �� ���
		sum += s.score[i];                   // ���� ���
	}
	printf("\n");
	s.avg = sum / 5.0;                       // ��� ���

	return s;                                // ����� ���� ����ü ���� ��ȯ
}