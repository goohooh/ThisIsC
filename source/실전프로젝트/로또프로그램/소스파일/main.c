//////////////////////////////////////////////////////////////////////////////////////////
//  < �����Լ� >  
//////////////////////////////////////////////////////////////////////////////////////////

#include "lotto.h"

int cnt = 0;                   // ������ ���Ӽ��� �����ϴ� ����
int lcnt = 0;                  // ��÷�� ���Ӽ��� �����ϴ� ����

int main(void)
{
	int mynum[100][7];       // ������ �ζǹ�ȣ ����, ȸ�� ���� �ִ� 100����
	int lotnum[10][8];       // ��÷�� �ζǹ�ȣ ����(ȸ���� ���ʽ���ȣ ����), �ִ� 10ȸ��
	double lotmoney[10][6];  // ���ݾ� ����(5����� 1�����, ȸ�� ����), �ִ� 10ȸ��
	
	int sel;
	
	while(1)
	{
		sel = menu_disp();
		if(sel == 9)
		{
			break;
		}
		
		switch(sel)
		{
			case 1: auto_mynum_input(mynum); break;
			case 2: keyin_mynum_input(mynum); break;
			case 3: file_mynum_input(mynum); break;
			case 4: mynum_display(mynum); break;
			case 5: keyin_lotdata_input(lotnum, lotmoney); break; 
			case 6: file_lotdata_input(lotnum, lotmoney); break;
			case 7: lotdata_display(lotnum, lotmoney); break;
			case 8: winning_display(mynum, lotnum, lotmoney); break;
		}
	}

	return 0;
}