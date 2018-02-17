#include <stdio.h>
int count_31(const int *pm, int size);
int change_2(int *pm);
int print_5(const int *pm, size);

int main(void){

    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int size = sizeof(month)/sizeof(month[0]);

    // printf("%d", count_31(month, size));

    // change_2(month);
    // printf("%d", month[1]);

    print_5(month, size);

    return 0;
}

int print_5(const int *pm, size){
    int i;
    for(i=0;i<size;i++){
        if(i != 0 && i % 5 == 0)
            printf("\n");
        printf("%5d",pm[i]);
    }
}

int change_2(int *pm){
    pm[1] = 29;
}

int count_31(const int *pm,int size){
    int i,cnt = 0;

    for(i=0;i<size;i++){
        if(pm[i]==31){
            cnt += 1;
        }
    }

    return cnt;
}
