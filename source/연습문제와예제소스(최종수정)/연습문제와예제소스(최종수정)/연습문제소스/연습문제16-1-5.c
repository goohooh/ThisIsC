#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char temp[32];                            // ���ڿ��� �ӽ� �Է��� char �迭
	char *ps, *pt;                            // ���� �Ҵ� ���� ���� ������
	int len = 1;                              // �Է� ���ڿ��� ��ü ���� ���

	ps = (char *)calloc(1, 1);                // �� ����Ʈ ���� �Ҵ� �� �ι��ڷ� �ʱ�ȭ
	while (1)
	{
		printf("�޸� �Է� : ");
		fgets(temp, sizeof(temp), stdin);     // �� ���� �޸� �Է�
		temp[strlen(temp) - 1] = '\0';        // ���๮�� ����
		if (strcmp(temp, "end") == 0) break;  // end �Է��ϸ� �ݺ� ����
		len += strlen(temp) + 1;              // �޸��� ��ü ���� ���
		pt = (char*)realloc(ps, len);         // ��ü ���̿� �°� ���Ҵ�
		if (pt == NULL)                       // �߰� �Ҵ��� �Ұ����ϸ� �Է� ����
		{
			printf("�޸� ����...\n");
			break;
		}
		ps = pt;                              // ���Ҵ翡 ������ ��츸 ps�� ����
		strcat(ps, temp);                     // ���� �Է��� �޸� ���̱�
		strcat(ps, " ");                      // �޸� ���̿� ���� �߰�
	}
	printf("%s\n", ps);                       // ��ü �޸� ���
	free(ps);                                 // ���� �Ҵ� ���� ��ȯ

	return 0;
}