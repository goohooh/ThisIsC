#include <stdio.h>

int main(void)
{
	int hour, min, sec;    // ��, ��, �ʸ� ������ ����
	double time = 3.76;    // �ð� �ʱ�ȭ

	hour = (int)time;      // ����ȯ���� ���� �κи��� ��󳽴�.
	time -= hour;          // �� �ð��� �ȵǴ� �κи��� �ٽ� �����Ѵ�.
	time *= 60.0;          // �� ������ ȯ��
	min = (int)time;       // ���� �κи��� ��󳻾� ������ �����Ѵ�.
	time -= min;           // �Ϻ��� �ȵǴ� �κи��� �ٽ� �����Ѵ�.
	time *= 60.0;          // �� ������ ȯ��
	sec = (int)time;       // ���� �κи��� ��󳻾� �ʷ� �����Ѵ�.
	printf("3.76�ð��� %d�ð� %d�� %d���Դϴ�.\n", hour, min, sec);

	return 0;
}