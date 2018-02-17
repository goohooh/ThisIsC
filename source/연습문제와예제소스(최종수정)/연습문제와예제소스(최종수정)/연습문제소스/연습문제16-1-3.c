#include <stdio.h>
#include <stdlib.h>                           // malloc, free �Լ��� ���� ��� ����

int main(void)
{
	double *high, *low;                       // ���� �Ҵ� ������ ������ ������

	high = (double *)malloc(sizeof(double));  // �ְ��� ���� �Ҵ�
	low = (double *)malloc(sizeof(double));   // ������� ���� �Ҵ�

	if ((high == 0) || (low == 0))            // ���� �Ҵ� ���� �˻�
	{
		printf("�޸𸮰� �����մϴ�.\n");
		exit(1);
	}

	printf("�ְ��°� ��������� �Է��ϼ��� : ");
	scanf("%lf%lf", high, low);               // �Ҵ��� ���� ������ ������ �Է�
	printf("�ϱ����� %.1lf�� �Դϴ�.\n", *high - *low); // �ϱ��� ��� ���

	free(high);                               // �Ҵ��� ���� ���� ��ȯ
	free(low);

	return 0;
}