#include <stdio.h>

int main(void)
{
	int res;

	res = sizeof (short) > sizeof (long);
	// sizeof�� �ǿ����ڷ� �ڷ��� �̸��� ����Ͽ� ũ�⸦ ����Ʈ ������ ����Ѵ�.
	// short���� ũ�Ⱑ long������ ũ�� ���̹Ƿ� 1, �׷��� ������ 0�� res�� �����Ѵ�.

	printf("%s\n", (res == 1) ? "short" : "long");
	// res�� 1�� ������ short���� ũ�Ⱑ ũ�Ƿ� ����ϰ�
	// �׷��� ������ long���� ����Ѵ�.

	return 0;
}