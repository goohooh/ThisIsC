#include <stdio.h>
#include <string.h>                           // strlen �Լ��� ���� ���� ��� ���� ����

int main(void)
{
	char name[20];                            // �̸��� ������ �迭
	char phone[20];                           // ��ȭ��ȣ�� ������ �迭
	char addr[80];                            // �ּҸ� ������ �迭

	printf("�̸� : ");
	fgets(name, sizeof(name), stdin);         // �̸� �Է�
	name[strlen(name) - 1] = '\0';            // ���� �Բ� �Էµ� ���๮�� ����

	printf("��ȭ��ȣ : ");
	fgets(phone, sizeof(phone), stdin);       // ��ȭ��ȣ �Է�
	phone[strlen(phone) - 1] = '\0';          // ���๮�� ����

	printf("�ּ� : ");
	fgets(addr, sizeof(addr), stdin);         // �ּ� �Է�
	addr[strlen(addr) - 1] = '\0';            // ���๮�� ����

	printf("%s, %s, %s", name, phone, addr);  // �̸�, ��ȭ��ȣ, �ּҸ� �� �ٿ� ���

	return 0;
}