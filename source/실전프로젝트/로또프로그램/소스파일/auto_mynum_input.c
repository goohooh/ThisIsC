//////////////////////////////////////////////////////////////////////////////////////////
//  < �ζǹ�ȣ �ڵ��Է� �Լ� >  
//////////////////////////////////////////////////////////////////////////////////////////

#include "lotto.h"

extern int cnt;  // ������ ���Ӽ��� �����ϴ� ����

void auto_mynum_input(int (*mynum)[7])
{
	int nums[6] = {0};
	int n, i;
	char yn;
	
	printf("\n[ �ڵ� ��ȣ �Է� ]\n\n");
	
	while(1)
	{
		printf("# ȸ���� �Է��ϼ���(���� -1) : ");
		scanf("%d", &n); 
		getchar();
		if(n == -1) break;
		
		while(1)
		{
			num_generator(nums, 6);  // �ζ� ��ȣ �ڵ� ������
			
			printf("<%dȸ> �ڵ���ȣ : ", n);
			for(i = 0; i < 6; i++)
			{
				printf("%4d", nums[i]);
			}
			printf("\n�� ��ȣ�� �����Ͻðڽ��ϱ�(y/n)? ");
			scanf("%c", &yn);
			getchar();
			if( (yn == 'y') || (yn == 'Y') ) break;
			printf("�ٸ� ��ȣ�� �����մϴ�!\n\n");
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
