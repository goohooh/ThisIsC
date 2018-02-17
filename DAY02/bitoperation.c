#include <stdio.h>

// �극��ũ 1�� ��Ʈ  0x02
// ����Ʈ 2�� ��Ʈ    0x04
// ������ 3�� ��Ʈ    0x08
// ���� 4�� ��Ʈ      0x10
// �õ� 5�� ��Ʈ      0x20

void display_ecu(char ecu);
void button_menu(void);

int main(void)
{
    char ecu = 0;
    int sel;

    while(1)
    {
        display_ecu(ecu);
        button_menu();
        printf("> Select Button(exit -1) : ");
        scanf("%d", &sel);
        if(sel == -1)
            break;
        if(sel == 3)
            ecu &= ~(0x1 << 4);   // ����(4��) clear
        if(sel == 4)
            ecu &= ~(0x1 << 3);   // ������(3��) clear
        if((sel == 5) && !(ecu & (0x1 << 5)) && !(ecu & (0x1 << 1))) // �õ��ε� �극��ũ�� �۵����� ������
            continue;

        ecu ^= (0x1 << sel);
    }

    return 0;
}

void display_ecu(char ecu)
{
    if(ecu & (0x1 << 1))
        printf("[Break] ");
    if(ecu & (0x1 << 2))
        printf("[Light On] ");
    if(ecu & (0x1 << 3))
        printf("[Aircontroller On] ");
    if(ecu & (0x1 << 4))
        printf("[Heater On] ");
    if(ecu & (0x1 << 5))
        printf("[Motor On] ");
    printf("\n\n");
}

void button_menu(void)
{
    printf("[1] Break ");
    printf("[2] Light ");
    printf("[3] Aircontroller ");
    printf("[4] Heater ");
    printf("[5] Motor\n");
}

