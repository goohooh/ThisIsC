#include <stdio.h>

struct profile        // ��������� ������ ����ü ����
{
	char name[20];    // �̸�
	double grade;     // ����
	int english;      // ���� ����
};

void input_data(struct profile *ps);
void elite(struct profile *ps);

int main(void)
{
	struct profile new_staff[5];        // ����ü �迭 ����

	input_data(new_staff);              // �Է� �Լ� ȣ��
	elite(new_staff);                   // ����Ʈ ��� ���

	return 0;
}

void input_data(struct profile *ps)     // �Ű������� ����ü ������
{
	int i;

	printf("�̸�, ����, ���������� �Է��ϼ���.\n");
	for (i = 0; i < 5; i++)             // ����ü �����ͷ� ��� ����
	{
		scanf("%s%lf%d", (ps + i)->name, &((ps + i)->grade), &((ps + i)->english));
	}
}

void elite(struct profile *ps)          // ����Ʈ ����� ����ϴ� �Լ�
{
	int i;

	for (i = 0; i < 5; i++)             // �迭 ��� ����ŭ �ݺ�
	{                                   // ������ 4.0 �̻�, ���������� 900�� �̻��̸�
		if ((((ps + i)->grade) >= 4.0) && (((ps + i)->english) >= 900))
		{
			printf("%s, %.1lf, %d\n",   // �� ��� ���
				(ps + i)->name, (ps + i)->grade, (ps + i)->english);
		}
	}
}