#include <stdio.h>

int count_31(int *mp);

int main(void)
{
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int res;

	res = count_31(month);
	printf("31���� �ִ� ���� �� : %d\n", res);

	return 0;
}

int count_31(int *mp)             // �迭���� ������ ������
{
	int cnt = 0;                  // 31���� ���� ������ ����, 0���� �ʱ�ȭ �ʿ�
	int i;                        // �ݺ� ���� ����

	for (i = 0; i < 12; i++)      // 12�����̹Ƿ� 12�� �ݺ�
	{
		if (mp[i] == 31) cnt++;   // �� ���� �ϼ��� 31�� ������ cnt����
	}

	return cnt;                   // ������ cnt�� �� ��ȯ
}