#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main()  
{  
    int n;
    scanf("%d", &n);
    int a[n], x, count=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;  
}  