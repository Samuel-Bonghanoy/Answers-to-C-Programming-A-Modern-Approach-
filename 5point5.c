#include <stdio.h>

int main(void)
{
    float income;
    printf("Enter your income: ");
    scanf("%f", &income);

    if(income < 750){
        printf("1 percent of income");
    }
    else if(income >= 750 && income < 2250){
        printf("2 percent of amount over 750$");
    }
    else if(income >= 2250 && income < 3750){
        printf("3 percent of amount over 2250$");
    }
    else if(income >= 3750 && income < 5250){
        printf("4 percent of amount over 3750$");
    }
    else if(income >= 5250 && income < 7000){
        printf("5 percent of amount over 5250$");
    }
   else if(income > 7000){
        printf("6 percent of amount over 750$");
    }
    return 0;
}