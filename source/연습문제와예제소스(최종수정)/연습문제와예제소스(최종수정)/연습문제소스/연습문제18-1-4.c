#include <stdio.h>

int main(void)
{
	FILE *ifp, *ofp;                  // ���� ������
	char src[80], des[80];            // ���ϸ��� �Է��� �迭
	int ch;                           // ���ڸ� �Է��� ����

	printf("������ ���ϸ� : ");
	scanf("%s", src);
	printf("������� ���ϸ� : ");
	scanf("%s", des);

	ifp = fopen(src, "r");            // ������ ���� ����
	if (ifp == NULL)
	{
		printf("# %s������ �����ϴ�.\n", src);
		return 1;
	}

	ofp = fopen(des, "w");            // ������� ���� ����
	if (ofp == NULL)
	{
		printf("# %s������ ������ ���߽��ϴ�.\n", des);
		return 1;
	}

	while ((ch = fgetc(ifp)) != EOF)  // ������ ������ ���ڸ� �ϳ��� �о�
	{
		fputc(ch, ofp);               // ������� ���Ͽ� ���
	}
	printf("# %s������ %s���Ϸ� �����߽��ϴ�.\n", src, des);
	fclose(ifp);                      // ���� ����
	fclose(ofp);

	return 0;
}