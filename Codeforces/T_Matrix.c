#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main()  
{  
    int n;
    scanf("%d", &n);
    float ar[n][n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%f", &ar[i][j]);
        }
    }
    float sum1 = 0, sum2 = 0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i == j)
            {
                sum1 = sum1 + ar[i][j];
            }
            if (i+j == n-1)
            {
                sum2 = sum2 + ar[i][j];
            }
        }
    }
    int s = sum1 - sum2;
    s = abs(s);
    printf("%d", s);
    return 0;  
}  