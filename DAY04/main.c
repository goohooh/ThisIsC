#include <stdio.h>

int main(void){

    char w;
    int res = 1, max = 0, cnt;

    while(1){
        res = scanf("%c", &w);
        if (res == -1) break;

        if(w != '\0'){
            cnt++;
        }
        if(cnt > max) max = cnt;
    }

    printf("Most long word : %d", max);

    return 0;
}
