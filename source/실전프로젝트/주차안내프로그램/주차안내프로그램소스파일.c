/*------------------------------------------------------------------------------
 * ���� : ���� �ȳ� ���α׷�
 * ���� : ���� �������� �� ������ ã�� �ȳ��Ѵ�.
 *----------------------------------------------------------------------------*/

#include <stdio.h>
enum {DOWN, UP};

int disp_menu(void);

void enter_park(int (*park_space)[2][5], int (*reserved)[3]);
void exit_park(int (*park_space)[2][5]);
void reserve_park(int (*reserved)[3]);
void print_park(int (*park_space)[2][5], int (*reserved)[3]);

void print_basement(int (*park_space)[5], int floor, int (*reserved)[3]);
int check_reservation(int (*reserved)[3], int basement, int num);
int check_reserved_num(int (*reserved)[3], int car_num, int *foor, int *resv_num);
int find_space(int (*park_space)[5], int floor, int (*reserved)[3]);

int main(void)
{
	int park_space[3][2][5] = {0};                          // 3�� 2�� 5���� ���� ����
	int reserved[30][3] = {0};                              // �������� ���, �ִ� 30�� ���� ����
	int sel;

	while(1)
	{
		sel = disp_menu();                                  // �޴� ���
		if(sel == 0) break;

		switch(sel)
		{
		case 1: enter_park(park_space, reserved); break;    // ����
		case 2: exit_park(park_space); break;               // ����
		case 3: reserve_park(reserved); break;              // �������� ��� �� ����
		case 4: print_park(park_space, reserved); break;    // ���� ���
		default: continue;
		}
	}

	return 0;
}

// �޴��� ����Ѵ�.

int disp_menu(void)
{
	int sel;

	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. �������� ���\n");
	printf("4. ������Ȳ ���\n");
	printf("0. ����\n");
	printf("> ��ȣ ���� : ");
	scanf("%d", &sel);
	fflush(stdin);
	printf("\n");

	return sel;
}

// �������� �� ���� ã�� ������ �ȳ��Ѵ�.

void enter_park(int (*park_space)[2][5], int (*reserved)[3])
{
	int i, cnt;
	int park_num, car_num, direction;
	int res, floor, resv_num;

	printf("> ���� �Է�(���� 4�ڸ�) : ");
	scanf("%d", &car_num);
	res = check_reserved_num(reserved, car_num, &floor, &resv_num);
	if(res == 1)
	{
		park_space[floor - 1][(resv_num - 1) / 5][(resv_num - 1) % 5] = car_num;
		printf("@ �������� : B%d�� %d�� �����߽��ϴ�.\n\n", floor, resv_num);
		return;
	}

	printf("@ ���� ���� ���� : ");
	for(i = 0; i < 3; i++)
	{
		cnt = find_space(park_space[i], i, reserved);
		printf("B%d��[%d��]  ", i + 1, cnt);
	}
	printf("\n\n");

	i = 0;
	while(1)
	{
		print_basement(park_space[i], i, reserved);
		printf("> ���� ��ȣ �Է�(�ٸ��� 0, ��� -1) : ");
		scanf("%d", &park_num);
		fflush(stdin);
		printf("\n");
		if(park_num == -1) return;
		if(park_num != 0) break;

		if(i == 0) direction = DOWN;
		else if(i == 2) direction = UP;

		if(direction == DOWN) i++;
		else i--;
	}

	park_space[i][(park_num - 1) / 5][(park_num - 1) % 5] = car_num;
	printf("@ �����Ǿ����ϴ�!\n\n");
}

// �����忡�� �����ϰ� �����͸� �����Ѵ�.

void exit_park(int (*park_space)[2][5])
{
	int i, j, k;
	int car_num;

	printf("> ���� �Է�(���� 4�ڸ�) : ");
	scanf("%d", &car_num);

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 2; j++)
		{
			for(k = 0; k < 5; k++)
			{
				if(car_num == park_space[i][j][k])
				{
					park_space[i][j][k] = 0;
					printf("@ �����Ǿ����ϴ�.\n\n");
					return;
				}
			}
		}
	}
	printf("@ �ش� ������ �����ϴ�.\n\n");
}

// ���������� ����ϰ� �����Ѵ�.

void reserve_park(int (*reserved)[3])
{
	int reservation_num;
	int basement, num;
	int i, dup;
	char yn;

	while(1)
	{
		printf("> ���� ��ȣ �Է�(���� 0) : ");
		scanf("%d", &basement);
		if(basement == 0) break;
		scanf("%d", &num);
		fflush(stdin);

		dup = 0;
		for(i = 0; reserved[i][1] != 0; i++)
		{
			if((basement == reserved[i][1]) && (num == reserved[i][2]))
			{
				dup = 1;
				break;
			}
		}
		if(dup == 1)
		{
			printf("@ B%d�� %d���� %d�� ��ϵǾ� �ֽ��ϴ�!\n", basement, num, reserved[i][0]);
			printf("> �� ��ȣ�� ����Ͻðڽ��ϱ�(Y/N)? ");
			scanf("%c", &yn);
			fflush(stdin);
			if(!((yn == 'Y') || (yn == 'y')))
			{
				printf("@ ��ҵǾ����ϴ�.\n\n");
				continue;
			}
		}
		printf("> ������� ��ȣ �Է� : ");
		scanf("%d", &reservation_num);
		reserved[i][0] = reservation_num;
		reserved[i][1] = basement;
		reserved[i][2] = num;
		printf("@ ��ϵǾ����ϴ�.\n\n");
	}
}

// ��ü ���� ���¸� ����Ѵ�.

void print_park(int (*park_space)[2][5], int (*reserved)[3])
{
	int i;

	for(i = 0; i < 3; i++)
	{
		print_basement(park_space[i], i, reserved);
	}
}

// �� ���� ���� ���¸� ����Ѵ�.

void print_basement(int (*park_space)[5], int floor, int (*reserved)[3])   // 1�� ���� ���
{
	int i, j, num = 1;

	printf("[B%d��]============================\n", floor + 1);
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(park_space[i][j] == 0)
			{
				if(check_reservation(reserved, floor + 1, num)) printf("[resv] ");
				else printf("[%3d ] ", num);
			}
			else
			{
				printf("[%d] ", park_space[i][j]);
			}
			num++;
		}
		printf("\n");
	}
	printf("\n");
}

// �ش� ��, �ش� ��ȣ�� ���������� ��ϵǾ� �ִ��� Ȯ���Ѵ�.

int check_reservation(int (*reserved)[3], int basement, int num)
{
	int i;

	for(i = 0; i < 30; i++)
	{
		if((basement == reserved[i][1]) && (num == reserved[i][2])) return 1;
	}

	return 0;
}

// ���ϴ� �� ��ȣ�� ������������ Ȯ���Ѵ�.

int check_reserved_num(int (*reserved)[3], int car_num, int *floor, int *resv_num)
{
	int i;

	for(i = 0; reserved[i][0] != 0; i++)
	{
		if(car_num == reserved[i][0])
		{
			*floor = reserved[i][1];
			*resv_num = reserved[i][2];
			return 1;
		}
	}

	return 0;
}

// �������� �� ���� ���� Ȯ���Ѵ�.

int find_space(int (*park_space)[5], int floor, int (*reserved)[3])
{
	int i, j, cnt = 0, num = 0;

	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 5; j++)
		{
			num++;
			if((park_space[i][j] == 0) && !check_reservation(reserved, floor + 1, num)) cnt++;
		}
	}

	return cnt;
}
