#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80], str2[80];                     // �� �ܾ �Է��� �迭
	char *pa, *pb;                               // ��� ���ڿ��� ������ ������

	printf("�� �ܾ� �Է� : ");
	scanf("%s %s", str1, str2);                  // �� �ܾ� �Է�
	if (strlen(str1) > strlen(str2)) pa = str1;  // strlen �Լ��� �ܾ��� ���� ��
	else pa = str2;
	if (strcmp(str1, str2) < 0) pb = str1;       // strcmp �Լ��� ���� ���� �Ǵ�
	else pb = str2;
	printf("���̰� �� �ܾ� : %s\n", pa);
	printf("������ ���� ������ �ܾ� : %s\n", pb);

	return 0;
}