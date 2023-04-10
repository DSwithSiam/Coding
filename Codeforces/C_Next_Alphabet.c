#include <stdio.h>  
int main()  
{  
    char letter;
    scanf("%c", &letter);

    if (letter == 'z')
    {
        printf("a");
    }
    else
    {
        int nextletter = letter + 1;
        printf("%c", nextletter);
    }
    return 0;  
}  