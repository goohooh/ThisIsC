//////////////////////////////////////////////////////////////////////////////////////////
//  < ��÷��ȣ�� ���ݾ� Ű�����Է� �Լ� >  
//////////////////////////////////////////////////////////////////////////////////////////

#include "lotto.h"

extern int lcnt;  // ��÷�� ���Ӽ��� �����ϴ� ����

void keyin_lotdata_input(int (*lotnum)[8], double (*lotmoney)[6])
{
	int nums[7] = {0};
	double money[5] = {0};
	int n, i;
	char yn;
	
	printf("\n[ ��÷��ȣ�� ���ݾ� �Է� ]\n\n");
	
	while(1)
	{
		printf("# ȸ���� �Է��ϼ���(���� -1) : ");
		scanf("%d", &n);
		getchar();
		if(n == -1)
		{
			break;
		}
		
		while(1)
		{
			printf("<%dȸ> ��÷��ȣ�� �Է��ϼ���(���ʽ���ȣ ���� 7�� �Է�) : ", n);
			for(i = 0; i < 7; i++)
			{
				scanf("%d", nums + i);
			}
			getchar();
			printf("�Է��� ��ȣ�� �½��ϱ�(y/n)? ");
			scanf("%c", &yn);
			getchar();
			if( (yn == 'y') || (yn == 'Y') )
			{
				break;
			}
			printf("�ٽ� �Է��մϴ�!\n\n");
		}
		lotnum[lcnt][0] = n;
		for(i = 0; i < 7; i++)
		{
			lotnum[lcnt][i+1] = nums[i];
		}
		printf("%dȸ�� ��÷��ȣ�� ����Ǿ����ϴ�!\n\n", n);
		
		while(1)
		{
			printf("<%dȸ> ���ݾ��� �Է��ϼ���(5����� 1�����)\n==> ", n);
			for(i = 0; i < 5; i++)
			{
				scanf("%lf", money + i);
			}
			getchar();
			printf("�Է��� �ݾ��� �½��ϱ�(y/n)? ");
			scanf("%c", &yn);
			getchar();
			if( (yn == 'y') || (yn == 'Y') )
			{
				break;
			}
			printf("�ٽ� �Է��մϴ�!\n\n");
		}
		
		lotmoney[lcnt][0] = n;
		for(i = 0; i < 5; i++)
		{
			lotmoney[lcnt][i+1] = money[i];
		}
		lcnt++;
		printf("%dȸ�� ���ݾ��� ����Ǿ����ϴ�!\n\n", n);
	}	
	printf("�޴��� ���ư����� �ƹ�Ű�� ��������!");
	getch();
}