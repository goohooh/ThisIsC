#include <stdio.h>

int disp_menu(void);                               // �Լ� ����

int main(void)
{
	int sel;

	sel = disp_menu();                             // ��ȣ���� ����Ͽ� ȣ��, ��ȯ���� sel�� �����Ѵ�.
	printf("���õ� �޴��� %d�� �Դϴ�.\n", sel);   // ��ȯ�� ���

	return 0;
}

int disp_menu(void)                                // �Ű������� ���� ������ ��ȯ�Ѵ�.
{
	int sel;                                       // ������ �޴� ��ȣ�� ������ ����

	printf("=====< �޴� >=====\n\n");              // �޴� ���
	printf("1. ����«��\n");
	printf("2. �ᳪ������\n");
	printf("3. ������Į����\n\n");
	printf("# �޴��� �����ϼ��� : ");
	scanf("%d", &sel);                             // �޴� ����

	return sel;                                    // ������ �޴� ��ȣ�� ��ȯ�Ѵ�.
}