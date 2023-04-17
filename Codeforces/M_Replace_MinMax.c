#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <limits.h>


int main()  
{  
    int n;
    scanf("%d", &n);

    int a[n];
    
    int max = INT_MIN, min = INT_MAX, imax, imin ;
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if (min > a[i])
        {
            min = a[i];
            imin = i;
        }
        if (max < a[i])
        {
            max = a[i];
            imax = i;
        }
        
    }
    a[imax] = min;
    a[imin] = max;
    

    
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;  
}  