#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
/*
Examples:
input
3
3 1 2
output
1 2 3 
*/

int main()  
{  
    int n;
    scanf("%d", &n);
    char ar[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int c =1;
    for (int i = 0; i<n-1; i++)
    {
        for (int j = c; j < n; j++)
        {
            if(ar[i] > ar[j])
            {   
                int t = ar[j];
                ar[j] = ar[i];
                ar[i] = t;
            }
        }
        c++;
    }
    for (int i=0; i<n; i++)
        {
            printf("%d ", ar[i]);
        }

    return 0;  
}  