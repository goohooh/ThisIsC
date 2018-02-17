#include <stdio.h>

int main(void){
    int distance, speed, hour, min, temp;
    double sec;

    printf("Input distance and speed : ");
    scanf("%d %d", &distance, &speed);

    hour = distance / speed;
    temp = distance % speed;
    printf("%d", temp);
    min = (temp *60 ) / speed;
    temp = (temp * 60) % speed;
    sec = (temp * 60.0) / speed;

    return 0;
    //printf("%d", hour);
    //printf("Expected time is %d hours, %d minutes, %.3lf seconds", hour, min, sec);
}
