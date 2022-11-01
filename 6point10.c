#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool still_entering_dates = true;
    int day = 40, month = 13, year = 100;
    int temp_day, temp_month, temp_year;

    while(still_entering_dates){
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &temp_month, &temp_day, &temp_year);

        if (temp_month == 0 && temp_day == 0 && temp_year == 0){
            break;
        }

        if (temp_year < year){
            month = temp_month;
            day = temp_day;
            year = temp_year;
        }

        else if (temp_year == year && temp_month < month){
            month = temp_month;
            day = temp_day;
            year = temp_year;
        }

        else if (temp_year == year && temp_month == month && temp_day < day){
            month = temp_month;
            day = temp_day;
            year = temp_year;
        }
    }

    printf("%02d/%02d/%02d is the earliest date", month, day, year);

    return 0;
}