#include <stdio.h>
/*
Write a program that accepts a date from the user in the form mm/ dd /_vyyy and then displays it in the form yyyymmdd:
Enter a date: (mm/dd/yyyy): 2/17/20ll
You entered the date 20110217 
*/

int main()
{
    int month, day, year;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %d%02d%d", year, month, day);
    return 0;
}