#include <stdio.h>

enum { NUMBER = 1, PHONE_NUMBER };     // NUMBER�� 1, PHONE_NUMBER�� 2

typedef union
{
	int num;                           // ���� ����
	char phone[20];                    // ��ȭ��ȣ ����
} Password;

int main(void)
{
	Password my_pw;                    // ����ü ���� ����
	int sel;

	printf("1. ���� 4�ڸ�\n");
	printf("2. ��ȭ��ȣ\n");
	printf("���ϴ� ��й�ȣ �Է¹�� : ");
	scanf("%d", &sel);

	printf("��й�ȣ �Է� : ");
	switch (sel)
	{
	case NUMBER: scanf("%d", &my_pw.num); break;            // ���ڸ� ������ ���
	case PHONE_NUMBER : scanf("%s", my_pw.phone); break;    // ��ȭ��ȣ ����
	}

	printf("�Է��� ��й�ȣ : ");
	switch (sel)
	{
	case NUMBER: printf("%d", my_pw.num); break;
	case PHONE_NUMBER : printf("%s", my_pw.phone); break;
	}

	return 0;
}