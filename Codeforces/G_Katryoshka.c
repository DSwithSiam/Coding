#include <stdio.h>  
int main()  
{  
    long long int a, b, c, m = 0, min;
    scanf("%lld %lld %lld", &a, &b, &c);

    // while (a >= 1 && b >= 1 && c >= 1)
    // {
    //     a--;b--;c--;
    //     m++;
    // }
    if (a <= b && a <= c)
    {
        min = a;
    }
    else if (b <=a && b <= c)
    {
        min = b;
    }
    else
    {
        min = c;
    }
    a = a - min; 
    b = b - min;
    c = c - min;
    m = min;

    while (a >= 2 && b >= 1 && c >= 1)
    {
        a = a - 2;b--;c--;
        m++;
    }

    while (a >= 2 && c >= 1)
    {
        a = a - 2; c--;
        m++;
    }

    printf("%lld",m);
    return 0;  
}  