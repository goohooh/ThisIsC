#include <stdio.h>

// 브레이크 1번 비트  0x02
// 라이트 2번 비트    0x04
// 에어컨 3번 비트    0x08
// 히터 4번 비트      0x10
// 시동 5번 비트      0x20

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
            ecu &= ~(0x1 << 4);   // 히터(4번) clear
        if(sel == 4)
            ecu &= ~(0x1 << 3);   // 에어컨(3번) clear
        if((sel == 5) && !(ecu & (0x1 << 5)) && !(ecu & (0x1 << 1))) // 시동인데 브레이크가 작동하지 않으면
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

