//////////////////////////////////////////////////////////////////////////////////////////
//  < �ζǹ�ȣ �����Է� �Լ� >  
//////////////////////////////////////////////////////////////////////////////////////////

#include "lotto.h"

extern int cnt;  // ������ ���Ӽ��� �����ϴ� ����

void keyin_mynum_input(int (*mynum)[7])
{
	int nums[6] = {0};
	int n, i;
	char yn;
	
	printf("\n[ ���� ��ȣ �Է� ]\n\n");
	
	while(1)
	{
		printf("# ȸ���� �Է��ϼ���(���� -1) : ");
		scanf("%d", &n);
		getchar();
		if(n == -1) break;
	
		while(1)
		{
			printf("<%dȸ> ��ȣ�� �Է��ϼ��� : ", n);
			for(i = 0; i < 6; i++)
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
		mynum[cnt][0] = n;
		for(i = 0; i < 6; i++)
		{
			mynum[cnt][i+1] = nums[i];
		}
		cnt++;
		printf("# %d������ ����Ǿ����ϴ�!\n\n", cnt);
	}	
	printf("�޴��� ���ư����� �ƹ�Ű�� ��������!");
	getch();
}