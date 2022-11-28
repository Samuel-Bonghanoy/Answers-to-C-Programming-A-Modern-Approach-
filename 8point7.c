#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int *a = malloc(sizeof(int) * 5);
    int *b = malloc(sizeof(int) * 5);
    int *c = malloc(sizeof(int) * 5);

    int holder, rowSum = 0;
    int columnSum1 = 0;
    int columnSum2 = 0;
    int columnSum3 = 0;
    int columnSum4 = 0;
    int columnSum5 = 0;

    for(int i = 0; i <= 4; i++)
    {
        printf("Enter row %d: ", i+1);
        scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]); 
        
        for(int j = 0; j <= 4; j++)
        {
            rowSum += a[j];
        }

        columnSum1 += a[0];
        columnSum2 += a[1];
        columnSum3 += a[2];
        columnSum4 += a[3];
        columnSum5 += a[4];

        b[i] = rowSum;
        rowSum = 0;
    }

    c[0] = columnSum1;
    c[1] = columnSum2;
    c[2] = columnSum3;
    c[3] = columnSum4;
    c[4] = columnSum5;

    printf("Row totals: %d %d %d %d %d", b[0], b[1], b[2], b[3], b[4]);
    printf("\nColumn totals: %d %d %d %d %d", c[0], c[1], c[2], c[3], c[4]);
    
    return 0;
}