#include <stdio.h>

int main(void)
{
	char name[20] = "ȫ�浿";                // char �迭�� �����ϰ� �̸� �ʱ�ȭ
	int age = 17;                            // ���� �ʱ�ȭ
	double height = 190.0;                   // Ű �ʱ�ȭ
	char blood_type[3] = "AB";               // ������ �ʱ�ȭ, �迭�� ũ��� �ּ� 3 �̻�

	printf("10�� ���� ������...\n");         // �ܼ� ��� �޽���
	age = age + 10;                          // ���� ���̿� 10�� ���Ѵ�.
	height = height - 0.5;                   // Ű�� 0.5cm �پ��
	printf("�̸� : %s\n", name);             // �̸� ���
	printf("���� : %d��\n", age);            // ���� ���
	printf("Ű : %.1lfcm\n", height);        // Ű ���
	printf("������ : %s��\n", blood_type);   // ������ ���

	return 0;
}