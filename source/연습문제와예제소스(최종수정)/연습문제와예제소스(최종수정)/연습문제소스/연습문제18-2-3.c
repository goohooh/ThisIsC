#include <stdio.h>

int main(void)
{
	FILE *fp;                     // ���� ������
	char str[20] = "empty";       // ���ڿ� �Է� �迭
	int ch;                       // ���� �Է�

	fp = fopen("a.txt", "r");     // ���� ����
	ch = fgetc(fp);               // ���� �Է�
	fflush(fp);                   // ���� ���
	fgets(str, sizeof(str), fp);  // �� �� �Է�
	printf("%s", str);            // ���
	fclose(fp);                   // ���� ����

	return 0;
}