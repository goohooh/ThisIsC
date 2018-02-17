#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *ifp, *ofp;                           // ���� ������
	char name[20];                             // �̸�
	double weight;                             // ü��
	double height;                             // Ű
	double m_height;                           // ���ͷ� ȯ���� Ű
	double bmi;                                // ��ü ���� ����

	ifp = fopen("a.txt", "r");                 // �Է� ���� ����
	if (ifp == NULL)                           // ������ ������ ���α׷� ����
	{
		printf("������ �����ϴ�.\n");
		return 1;
	}

	ofp = fopen("b.txt", "w");                 // ��� ���� ����
	if (ofp == NULL)
	{
		printf("������ ������ ���߽��ϴ�.\n");
		return 1;
	}

	fgets(name, sizeof(name), ifp);            // ù ��° �� �̸� �Է�
	name[strlen(name) - 1] = '\0';             // ���๮�� ����

	fscanf(ifp, "%lf %lf", &weight, &height);  // ü�߰� Ű �Է�
	m_height = height / 100.0;                 // Ű�� m������ ȯ��
	bmi = weight / (m_height * m_height);      // ��ü ���� ���� ���

	fprintf(ofp, "�̸� : %s, BMI : %.1lf\n", name, bmi);           // �̸�, BMI���
	fprintf(ofp, "ü�� : %.1lfkg, Ű : %.1lfcm", weight, height);  // ������, Ű ���

	fclose(ifp);                               // ���� ����
	fclose(ofp);

	return 0;
}
