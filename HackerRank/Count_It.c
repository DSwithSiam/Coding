#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main()  
{  
    char ar[1001];
    fgets(ar, 1001, stdin);
    int len = strlen(ar);
    int c = 0, sm = 0, sp = 0;
    for (int i = 0; i < len; i++)
    {
        if (ar[i] == ' ')
        {
            sp++;
        }
        else if (ar[i] >= 'a' && ar[i] <= 'z' )
        {
            sm++;
        }
        else if (ar[i] >= 'A' && ar[i] <= 'Z' )
        {
            c++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d\n", c, sm, sp);
    return 0;  
}  