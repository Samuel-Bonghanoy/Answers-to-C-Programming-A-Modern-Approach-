#include <stdio.h>

int main(void)
{
    int prefix, iden, code, num, dig;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &iden, &code, &num, &dig);

    printf("GSI prefix: %d", prefix);
    printf("\nGroup identifier: %d", iden);
    printf("\nPublisher code: %d", code);
    printf("\nItem number: %d", num);
    printf("\nCheck digit: %d", dig);

    return 0;
}