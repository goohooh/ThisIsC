//////////////////////////////////////////////////////////////////////////////////////////
//  < ��÷��ȣ�� ���ݾ� ȭ����� �Լ� >  
//////////////////////////////////////////////////////////////////////////////////////////

#include "lotto.h"

extern int lcnt;  // ��÷�� ���Ӽ��� �����ϴ� ����

void lotdata_display(int (*lotnum)[8], double (*lotmoney)[6])
{
	int i, j;
	
	printf("\n[ ��÷��ȣ�� ���ݾ� ��� ]\n\n");
	for(i = 0; i < lcnt; i++)
	{
		printf("[%3dȸ��] ", lotnum[i][0]);
		for(j = 1; j < 7; j++)
		{
			printf("%4d", lotnum[i][j]);
		}
		printf(" (���ʽ� %d)\n", lotnum[i][7]);
		printf("@@ ���ݾ� : ");
		for(j = 1; j < 6; j++)
		{
			printf("%12.0lf", lotmoney[i][j]);
		}
		printf("\n\n");
	}
	
	printf("�޴��� ���ư����� �ƹ�Ű�� ��������!");
	getch();
}