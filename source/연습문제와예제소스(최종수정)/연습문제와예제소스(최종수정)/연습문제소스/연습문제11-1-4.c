#include <stdio.h>

int main(void)
{
	int ch, num;

	printf("�ϳ��� ���� �Է�(0~9) : ");
	ch = getchar();
	num = ch - '0';
	num++;
	printf("%c�� 1�� ���� ���� %d�Դϴ�.\n", ch, num);

	return 0;
}