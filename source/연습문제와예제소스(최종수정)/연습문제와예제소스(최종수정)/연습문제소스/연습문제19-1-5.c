#include <stdio.h>

#define CHECK_CNT
#define LEVEL 2

int main(void)
{
	int val, cnt, i;
	int sum = 0;

	printf("����� ���� : ");
	scanf("%d", &cnt);

#ifdef CHECK_CNT   // CHECK _CNT ��ũ�ΰ� ���ǵǸ� ���� ���� ������
	printf("�Է��� ���� : %d\n", cnt);
#endif

	for (i = 0; i < cnt; i++)
	{
		printf("��� �Է� : ");
		scanf("%d", &val);
		sum += val;

#ifdef CHECK_CNT   // CHECK _CNT ��ũ�ΰ� ���ǵǸ� �� ��° endif���� ������
		printf("����� ���� : %d, ������ �� : %d\n", i + 1, sum);

#if LEVEL == 2     // LEVEL ��ũ�ΰ� 2�� ���ǵǸ� ���� ���� ������
		printf("���� �Է� �� ��� : %.1lf\n", sum / (double)(i + 1));
#endif             // #if LEVEL = = 2�� ¦�� �Ǵ� endif

#endif             // #ifdef CHECK _CNT�� ¦�� �Ǵ� endif
	}
	printf("��ü �Է� ���� ��� : %.1lf\n", sum / (double)cnt);

	return 0;
}