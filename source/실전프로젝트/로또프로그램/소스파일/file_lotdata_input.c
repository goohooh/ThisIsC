//////////////////////////////////////////////////////////////////////////////////////////
//  < ��÷��ȣ�� ���ݾ� �����Է� �Լ� >  
//////////////////////////////////////////////////////////////////////////////////////////

#include "lotto.h"

extern int lcnt;  // ��÷�� ���Ӽ��� �����ϴ� ����

void file_lotdata_input(int (*lotnum)[8], double (*lotmoney)[6])
{
	FILE *nfp, *mfp;
	char name[20];
	char yn;
	int num, res, i, lcnt_temp;
	double money;

	lcnt_temp = lcnt;

	while(1)
	{
		printf("# ��÷��ȣ �����̸��� �Է��ϼ��� : ");
		scanf("%s", name);
		getchar();
		nfp = fopen(name, "r");

		if(nfp == NULL)
		{
			printf("@ �ش� ������ �����ϴ�!\n");
			printf("# ��� �Է��Ͻðڽ��ϱ�(y/n)? ");
			scanf("%c", &yn);
			getchar();
			if( (yn == 'n') || (yn == 'N') ) 
			{
				return;
			}
		}
		else
		{
			printf("@ �ش� ������ ã�ҽ��ϴ�!\n");
			Sleep(1500);
			break;
		}
	}

	res = fscanf(nfp, "%d", &num);

	while(res != EOF)
	{
		lotnum[lcnt][0] = num;
		for(i = 1; i < 8; i++)
		{
			fscanf(nfp, "%d", &num);
			lotnum[lcnt][i] = num;
		}
		lcnt++;
		res = fscanf(nfp, "%d", &num);
	}
	printf("# ��÷��ȣ ������ ������ ��� �о����ϴ�!\n");
	fclose(nfp);

	lcnt = lcnt_temp;

	while(1)
	{
		printf("\n# ���ݾ� �����̸��� �Է��ϼ��� : ");
		scanf("%s", name);
		getchar();
		mfp = fopen(name, "r");
		if(mfp == 0)
		{
			printf("@ �ش� ������ �����ϴ�!\n");
			printf("# ��� �Է��Ͻðڽ��ϱ�(y/n)? ");
			scanf("%c", &yn);
			getchar();
			if( (yn == 'n') || (yn == 'N') )
			{
				return;
			}
		}
		else
		{
			printf("@ �ش� ������ ã�ҽ��ϴ�!\n");
			Sleep(1500);
			break;
		}
	}

	res = fscanf(mfp, "%lf", &money);

	while(res != EOF)
	{
		lotmoney[lcnt][0] = money;
		for(i = 1; i < 6; i++)
		{
			fscanf(mfp, "%lf", &money);
			lotmoney[lcnt][i] = money;
		}
		lcnt++;
		res = fscanf(mfp, "%lf", &money);
	}
	printf("# ���ݾ� ������ ������ ��� �о����ϴ�!\n");
	printf("�޴��� ���ư����� �ƹ�Ű�� ��������!");
	getch();
	fclose(mfp);
}