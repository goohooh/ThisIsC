#include <stdio.h>

int main(void)
{
	char space, tab, enter;                               // ���ڸ� �Է¹��� ����

	scanf("%c%c%c", &space, &tab, &enter);                // %c�� ���� ���� �Է�
	printf("�����̽� Ű�� �ƽ�Ű �ڵ尪 : %d\n", space);  // %d�� �ƽ�Ű �ڵ尪 ���
	printf("�� Ű�� �ƽ�Ű �ڵ尪 : %d\n", tab);
	printf("���� Ű�� �ƽ�Ű �ڵ尪 : %d\n", enter);

	return 0;
}