#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main()  
{  
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int x = 1;
    for (int i=0; i<n-1; i++)
    {
        for (int j=x; j<n; j++)
        {
            if(ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
        x++;
    }
    if (n % 2 == 0)
    {
        int a;
        a = n / 2;
        printf("%d %d", ar[a-1], ar[a]);
    }
    else
    {
        int a;
        a = (n+1)/2;
        printf("%d", ar[a-1]);
    }

    return 0;  
}  