#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main()  
{  
    int n;
    scanf("%d", &n);
    int t = 0, p = 0;
    for (int i = 0; i < n; i++)
    {
        long long int a, b;
        scanf("%lld %lld", &a, &b);
        if (a > b)
        {
            t++;
        }
        else if (b > a)
        {
            p++;
        }
    }
    if (t > p)
    {
        printf("Tiger");
    }
    else if (p > t)
    {
        printf("Pathan");
    }
    else if (t == p)
    {
        printf("Draw");
    }
    
    return 0;  
}  