//////////////////////////////////////////////////////////////////////////////////////////
//  < �ζǹ�ȣ �����Է� �Լ� >  
//////////////////////////////////////////////////////////////////////////////////////////

#include "lotto.h"

extern int cnt;  // ������ ���Ӽ��� �����ϴ� ����

void file_mynum_input(int (*mynum)[7])
{
	FILE *fp;
	char name[20];
	char yn;
	int num, i;

	while(1)
	{
		printf("# �����̸��� �Է��ϼ��� : ");
		scanf("%s", name);
		getchar();
		fp = fopen(name, "r");
		if(fp == NULL)
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

	while(fscanf(fp, "%d", &num) != EOF)
	{
		mynum[cnt][0] = num;
		for(i = 0; i < 6; i++)
		{
			fscanf(fp, "%d", &mynum[cnt][i+1]);
		}
		cnt++;
	}
	printf("# ������ ������ ��� �о����ϴ�!\n");
	printf("�޴��� ���ư����� �ƹ�Ű�� ��������!");
	getch();
	fclose(fp);
}