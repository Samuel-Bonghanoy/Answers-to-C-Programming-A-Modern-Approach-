#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    float letter_count = 0, word_count= 1;

    printf("Enter a sentence: ");

    while((c = getchar()) != '\n'){
        switch(toupper(c)){
            case ' ':
                word_count++;
                break;
            default:
                letter_count++;
                break;
        }
    }
    printf("Average word length: %.1f", letter_count/ word_count);
    return 0;
}