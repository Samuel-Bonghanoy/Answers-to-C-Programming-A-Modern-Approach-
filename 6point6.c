#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int initial = 2, square = 0;
    while(square < n){
        square = initial * initial;
        if(square <= n){
           printf("%d\n", square);
        initial += 2;
        } 
    }

    return 0;
}