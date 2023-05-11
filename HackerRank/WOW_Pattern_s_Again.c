#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main()  
{  
    int n;
    scanf("%d", &n);
    int s = n-1, x = 1;
    for (int i=1; i<=n; i++)
    {
        for (int j=0; j<s; j++)
        {
            printf(" ");
        }
        for (int j=0; j<x; j++)
        {
            if(i % 2 != 0 )
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
        s--;
        x = x + 2;
    }
    return 0;  
}  