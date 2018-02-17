#include <stdio.h>

int main(void){

    int arr[6]={0,};
    int cnt=0;
    int i,temp,flag,size;

    while(cnt < 6){
        flag = 1;
        printf("Input Lottery number:");
        scanf("%d", &temp);

        if(cnt == 0){
            arr[0] = temp;
            cnt++;
            continue;
        }

        size = sizeof(arr)/sizeof(arr[0]);

        for(i=0;i < size;i++){
            if(temp == arr[i]){
                printf("Already Exist number!");
                flag = 0;
                break;
            }
        }

        if(flag){
            arr[cnt] = temp;
            cnt++;
        } else {
            continue;
        }
    }

    for(i=0;i<6;i++){
        printf("%5d", arr[i]);
    }
    printf("\nEND PROGRAM");
    return 0;
}
