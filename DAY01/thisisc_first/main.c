#include <stdlib.h>
#include <stdio.h>
int main(void){

    /*
    char a;
    scanf("%c", &a);
    if(a & 0x20) // 0x20 == 32
    {
        a = a & ~0x20;
    } else {
        a = a | ~0x20;
    }
    printf("%c", a);

    return 0;

    a = a ^ 0x20;
    printf("%c", a);
    */
    int i,j;

    for(i=0; i <9; i++){
        if(i <5){
            for(j=0;j<4-i;j++){
                printf(" ");
            }
            for(j=0;j<2*i+1;j++){
                printf("*");
            }
            printf("\n");
        }else {
            for(j=0;j < i-4;j++){
                printf(" ");
            }
            for(j=0;j < 9 - i + 4- 2*j;j++){
                printf("*");
            }
            printf("\n");
        }
    }

}
