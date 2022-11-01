#include <stdio.h>

int main(void)
{
    int hours, mins, newh;
    printf("Enter a 24-hour time: ");
    scanf("%02d:%02d", &hours, &mins);

    if(hours > 12){
        newh = hours - 12;
        printf("Equivalent 12-hour time: %02d:%02d PM", newh, mins);
    }
    else if(hours < 12){
        printf("Equivalent 12-hour time: %02d:%02d AM", hours, mins);
    }
    else if(hours == 12){
        if(mins == 0){
            printf("Equivalent 12-hour time: %02d:%02d AM", hours, mins);
        }
        else{
            printf("Equivalent 12-hour time: %02d:%02d PM", hours, mins);
        }
    }
    return 0;
}