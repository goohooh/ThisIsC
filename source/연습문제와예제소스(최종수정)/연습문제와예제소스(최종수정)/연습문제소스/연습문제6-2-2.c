#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 3; i++)      // �� �ٿ� $�� 5�� ����ϴ� ���� 3�� �ݺ�
	{
		for (j = 0; j < 5; j++)  // j�� 0���� 4���� 5�� �ݺ�
		{
			printf("$");         // $���
		}
		printf("\n");            // $�� 5�� ����� �Ŀ� ���� �ٲ۴�.
	}

	return 0;
}