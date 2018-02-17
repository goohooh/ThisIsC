#include "lotto.h"

//////////////////////////////////////////////////////////////////////////////////////////
//  < 메인 메뉴를 출력하고 선택된 메뉴 번호를 리턴하는 함수 >  
//////////////////////////////////////////////////////////////////////////////////////////

int menu_disp(void)
{
	int sel;

//	system("cls");
	printf("\n\n    ===< 로또 프로그램 >===\n\n");
	printf("---------------------------------\n");
	printf("1. 구입한 로또 번호 자동 입력\n");
	printf("2. 구입한 로또 번호 수동 입력\n");
	printf("3. 구입한 로또 번호 파일 입력\n");
	printf("4. 구입한 로또 번호 확인\n");
	printf("---------------------------------\n");
	printf("5. 추첨 번호와 배당 금액 수동 입력\n");
	printf("6. 추첨 번호와 배당 금액 파일 입력\n");
	printf("7. 추첨 번호와 배당 금액 확인\n");
	printf("---------------------------------\n");
	printf("8. 당첨 번호와 금액 출력\n");
	printf("9. 종료\n");
	printf("---------------------------------\n\n");
	printf("** 원하는 번호를 선택하세요 : ");
	scanf("%d", &sel);
	fflush(stdin);

	return sel;
}