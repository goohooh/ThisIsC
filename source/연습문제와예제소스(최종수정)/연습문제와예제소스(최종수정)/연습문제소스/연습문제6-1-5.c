#include <stdio.h>

int main(void)
{
	int pos;                          // ����� �Է��� ����
	int sum = 0;                      // �Է��� ����� ������ ����, �ݵ�� 0���� �ʱ�ȭ

	scanf("%d", &pos);                // ��� �Է�
	while (pos > 0)                   // �Է��� ���� 0���� ũ�� �ݺ�
	{
		sum += pos;                   // �Է��� ���� sum�� ����
		scanf("%d", &pos);            // �ٽ� �Է��� �ݺ��Ѵ�.
	}
	printf("������ �� : %d\n", sum);  // �ݺ��� ���� �Ŀ� ������ �� ���

	return 0;
}