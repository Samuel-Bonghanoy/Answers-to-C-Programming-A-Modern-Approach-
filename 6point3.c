#include <stdio.h>
int main()
{
    int n1, n2, gcd;

    printf("Enter a fraction: ");
    scanf("%d/%d", &n1, &n2);

    for(int i = 1; i <= n1 && i <= n2; i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }
    printf("In lowest terms: %d/%d", (n1 / gcd), (n2 / gcd));

    return 0;
}