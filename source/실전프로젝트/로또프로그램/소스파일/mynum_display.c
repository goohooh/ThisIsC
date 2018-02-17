//////////////////////////////////////////////////////////////////////////////////////////
//  < 입력한 로또번호 화면출력 함수 >  
//////////////////////////////////////////////////////////////////////////////////////////

#include "lotto.h"

extern int cnt;  // 구입한 게임수를 저장하는 변수

void mynum_display(int (*mynum)[7])
{
	int i, j;
	
	printf("\n[ 구입 번호 출력 ]\n\n");
	for(i = 0; i < cnt; i++)
	{
		printf("[%3d회차] ", mynum[i][0]);
		for(j = 1; j < 7; j++)
		{
			printf("%4d", mynum[i][j]);
		}
		printf("\n");
	}
	printf("# 총 구입한 게임수 : %d\n", cnt);
	printf("메뉴로 돌아가려면 아무키나 누르세요!");
	getch();
}