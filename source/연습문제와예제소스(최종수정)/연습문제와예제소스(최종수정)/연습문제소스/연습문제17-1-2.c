#include <stdio.h>

struct cracker                                             // ����ü ����
{
	int price;                                             // ������ ������ ���
	int calories;                                          // ������ ������ ���
};

int main(void)
{
	struct cracker basasak;                                // ����ü ���� ����

	printf("�ٻ���� ���ݰ� ������ �Է��ϼ��� : ");
	scanf("%d %d", &basasak.price, &basasak.calories);     // ����� �� �Է�
	printf("�ٻ���� ���� : %d��\n", basasak.price);       // �Էµ� �� ���
	printf("�ٻ���� ���� : %dkcal\n", basasak.calories);

	return 0;
}