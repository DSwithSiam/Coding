#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void recursion (int ar[], int n, int i, long long int sum)
{
    if (i == n) {
        printf("%lld", sum);
        return;
    }
    sum = sum + ar[i];
    recursion(ar, n, i+1, sum);
    

    
    
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
    recursion(ar, n, 0, 0);
    return 0;  
}  