#include <stdio.h>
#include <ctype.h>
int main(void)
{   
    int hours, minutes;
    char c;

    printf("Enter a 12-hour time with an indicator (AM or PM): ");
    scanf("%d:%d %c", &hours, &minutes, &c);

    if(c == 'P'){
        hours += 12;
    }

    minutes = minutes;

    printf("Equivalent 24-hour time: %d:%d", hours, minutes);

    return 0;
}