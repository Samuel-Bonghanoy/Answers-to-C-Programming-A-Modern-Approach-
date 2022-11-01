#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    printf("Enter 4 integers to find largest and smallest: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int max = a, min = a;

    if (b > max){
        max = b;}
    else if (b < min){ 
        min = b;}
    if (c > max){
        max = c;}
    else if (c < min){
        min = c;}
    if (d > max){
        max = d;}
    else if (d < min){
        min = d;}

    printf("max: %d min : %d\n", max, min);

    return 0;
}