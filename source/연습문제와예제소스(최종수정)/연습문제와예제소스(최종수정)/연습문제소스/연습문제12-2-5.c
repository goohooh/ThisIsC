#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];                         // ���ڿ��� �Է��� �迭
	char res_str[80];                     // ���� ���ڿ��� ������ �迭
	char *star = "**********";            // ���� �κ��� ä�� ���ڿ�
	int len;                              // �Է� ���ڿ��� ���� ����

	printf("�ܾ� �Է� : ");
	scanf("%s", str);
	len = strlen(str);                    // �Է��� �ܾ��� ���� ���
	if (len <= 5)                         // ���̰� 5 �����̸� �״�� ����
		strcpy(res_str, str);
	else                                  // 5���� ũ��
	{
		strncpy(res_str, str, 5);         // �ϴ� �ټ� ���ڸ� ����
		res_str[5] = '\0';                // �������� �ι��� ����
		strncat(res_str, star, len - 5);  // ���ڿ��� ���̸�ŭ ���� ä��
	}
	printf("�Է��� �ܾ� : %s, ������ �ܾ� : %s\n", str, res_str);

	return 0;
}