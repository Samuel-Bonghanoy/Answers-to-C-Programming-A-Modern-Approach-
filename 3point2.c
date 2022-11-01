#include <stdio.h>
/* Write a program that formats product information entered by the user. A session with the
program should look like this:
Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010
Item
583
Unit
Price
$ 13.50
Purchase
Date
10/24/2010
*/

int main()
{
    int item, month, day, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchse date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("\nItem\t\t\tUnit\t\t\tPurchase");
    printf("\n\t\t\tPrice\t\t\tDate");
    printf("\n%d\t\t\t$ %.2f\t\t\t%02d/%02d/%d", item, price, month, day, year);
    return 0;
}