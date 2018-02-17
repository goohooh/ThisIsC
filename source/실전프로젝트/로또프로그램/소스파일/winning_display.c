//////////////////////////////////////////////////////////////////////////////////////////
//  < ��÷�ݾ� ȭ����� �Լ� >  
//////////////////////////////////////////////////////////////////////////////////////////

#include "lotto.h"

extern int cnt;  // ������ ���Ӽ��� �����ϴ� ����

void winning_display(int (*mynum)[7], int (*lotnum)[8], double (*lotmoney)[6])
{
	FILE *fp;
	double res = 0;
	int nums;
	int i, j, index, rank;

	fp = fopen("result.txt", "w");
	if(fp == NULL)
	{
		printf("# ������� ���� ����...");
		getch();
		return;
	}

	printf("\n[ ��÷�ݾ� ��� ]\n\n");
	for(i = 0; i < cnt; i++)
	{
		index = get_index(mynum[i][0], lotnum);
		if(index < 0)
		{
			printf("# %dȸ���� ���� ��÷���� �ʾҽ��ϴ�!\n", mynum[i][0]);
			continue;
		}
		nums = num_counter(mynum[i] + 1, lotnum[index] + 1);
		if(nums < 3)
		{
			continue;
		}
		if(nums == 6)
		{
			rank = 1;
		}
		else if( (nums == 5) && is_here(mynum[i] + 1, lotnum[index][7], 6))
		{
			rank = 2;
		}
		else if(nums == 5)
		{
			rank = 3;
		}
		else if(nums == 4)
		{
			rank = 4;
		}
		else if(nums == 3)
		{
			rank = 5;
		}

		res += lotmoney[index][6-rank];
		fprintf(fp, "[%3dȸ��] ", mynum[i][0]);
		for(j = 1; j < 7; j++)
		{
			fprintf(fp, "%4d", mynum[i][j]);
		}
		fprintf(fp, "  < %d�� > - %.0lf\n", rank, lotmoney[index][6-rank]);
		fprintf(fp, "=> ��÷��ȣ : ");
		for(j = 1; j < 8; j++)
		{
			fprintf(fp, "%4d", lotnum[index][j]);
		}
		fprintf(fp, "\n\n");
	}
	
	printf("# �� ��÷���� : %.0lf�� �Դϴ�!\n", res);
	fprintf(fp, "# �� ��÷���� : %.0lf�� �Դϴ�!\n", res);
	printf("�޴��� ���ư����� �ƹ�Ű�� ��������!");
	getch();
	fclose(fp);
}