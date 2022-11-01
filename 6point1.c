#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int size;
    printf("How many numbers would you like to enter? ");
    scanf("%d", &size);
    float temp, *arr = malloc(size * sizeof(float));

    for(int i = 0; i <= size; i++){
        printf("Enter a number: ");
        scanf("%f", &temp);
        if(temp <= 0){
            arr[i] = temp;
            break;
        }
        else{
          arr[i] = temp;
        }
    }

    float max = arr[0];
    for (int i = 0; i <= size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("The largest number entered was %f", max);
}