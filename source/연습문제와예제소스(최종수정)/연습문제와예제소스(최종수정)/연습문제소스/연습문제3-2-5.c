#include <stdio.h>

int main(void)
{
	char name[20];                      // �̸��� ������ �迭
	int age;                            // ���̸� ������ ����
	double height;                      // Ű�� ������ ����

	printf("�̸� �Է� : ");             // �Է� �ȳ� �޽���
	scanf("%s", name);                  // �迭������ �̸� �Է�, &�� ����
	printf("���̿� Ű(cm) �Է� : ");
	scanf("%d %lf", &age, &height);     // ��ȯ���ڸ� �������� ����Ͽ� �Է�
	printf("%s, %d��, %.1lfcm", name, age, height);   // �Էµ� �� ���

	return 0;
}