#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main()  
{  
    int a, n;
    scanf("%d %d", &a, &n);
    for(int i=1; i <=n; i++)
    {
        for(int i=1; i<=a; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;  
}  