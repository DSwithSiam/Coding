#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main()  
{  
    char ar[1001];
    int n = 0;
    scanf("%s", ar);
    for (int i=0; i < strlen(ar); i++)
    {
        if ('a' == ar[i] || 'e' == ar[i] || 'i' == ar[i] || 'o' == ar[i] ||'u' == ar[i] )
       {
            n++;
       }
    }
    printf("%d", n);
    return 0;  
}  