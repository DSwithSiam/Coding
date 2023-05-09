#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void recursion (int ar[], int n, int i)
{
    if (i == n) return;
    recursion(ar, n, i+1);
    if (i % 2 == 0)
    {
        printf("%d ", ar[i]);
    }
    
    
}

int main()  
{  
    int n;
    scanf("%d", &n);
    int ar [n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    recursion(ar, n, 0);
    return 0;  
}  