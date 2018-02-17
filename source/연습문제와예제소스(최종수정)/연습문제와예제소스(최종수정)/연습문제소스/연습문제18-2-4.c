#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *fp;                      // ���� ������
	int num;                       // �й�
	char name[20];                 // �̸�
	int age;                       // ����
	double height;                 // Ű
	char addr[80];                 // �ּ�

	fp = fopen("data.txt", "w");   // ���� �������� ���� ����
	if (fp == 0)                   // ���� ���� �˻�
	{
		printf("������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	while (1)
	{
		printf("�й� : ");
		scanf("%d", &num);                       // �й� �Է�
		if (num < 0) break;                      // ������ �Է� ����
		fflush(stdin);                           // �Է� ��Ʈ�� ���۸� ���

		printf("�̸� : ");
		fgets(name, sizeof(name), stdin);        // �̸� �Է�
		name[strlen(name) - 1] = '\0';           // ���๮�� ����

		printf("���� : ");
		scanf("%d", &age);                       // ���� �Է�

		printf("Ű : ");
		scanf("%lf", &height);                   // Ű �Է�
		fflush(stdin);

		printf("�ּ� : ");
		fgets(addr, sizeof(addr), stdin);
		addr[strlen(addr) - 1] = '\0';

		fprintf(fp, "%d\n ", num);               // ������ ���Ϸ� �й� ���
		fprintf(fp, "%s ", name);                // �̸� ���
		fprintf(fp, "%d %.1lf\n", age, height);  // ���̿� Ű ���
		fprintf(fp, "%s\n", addr);               // �ּ� ���
	}
	fclose(fp);                                  // ������ ���� ����

	return 0;
}