#include <stdio.h>

int main(void)
{
	char ch;                   // ���ڸ� ������ ����

	printf("���� �Է� : ");    // �Է� �ȳ� �޽���
	scanf("%c", &ch);          // ch������ ���� �Է�
	printf("%c������ �ƽ�Ű �ڵ尪�� %d�Դϴ�.", ch, ch);

	return 0;
}