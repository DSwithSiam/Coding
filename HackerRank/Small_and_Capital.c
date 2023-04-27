#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main()  
{  
    char ar[1001];
    scanf("%s", &ar);
    int alp = 0, small = 0;
    for (int i = 0; i < strlen(ar); i++)
    {
        if ('a' <= ar[i] && ar[i] <= 'z')
        {
            small++;
        }
        else
        {
            alp++;
        }
    }

    printf("%d %d", alp, small);
    
    return 0;  
}  