#include <stdio.h>

void change_29(int *mp);

int main(void)
{
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	change_29(month);
	printf("2���� �� �� : %d\n", month[1]);

	return 0;
}

void change_29(int *mp) // �迭���� ������ ������
{
	mp[1] = 29; // �� ��° �迭 ��� mp[1]�� 29 ����, �迭�� ���� �ٲ�
}