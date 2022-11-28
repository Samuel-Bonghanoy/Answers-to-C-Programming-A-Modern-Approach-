#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter message: ");

    while((ch = getchar()) != '\n')
    {
        switch(toupper(ch))
        {
            case 'A':
                ch = '4';
                break;
            case 'B':
                ch = '8';
                break;
            case 'E':
                ch = '3';
                break;
            case 'I':
                ch = '1';
                break;
            case 'O':
                ch = '0';
                break;
            case 'S':
                ch = '5';
                break;
            default:
                ch = toupper(ch);
                break;
        }
        putchar(ch);
    }
    
    return 0;
}