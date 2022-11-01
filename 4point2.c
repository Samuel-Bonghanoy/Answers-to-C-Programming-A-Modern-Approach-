#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter a three-digit number: ");
    scanf("%d", &x);

    printf("The reversal is: %3d", (((x % 100) / 10) * 10) + (x % 10 * 100) + ((x / 100)));

    return 0;
}