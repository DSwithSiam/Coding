#include <stdio.h>  
int main()  
{  
    long long int a, b, c, m = 0, min;
    scanf("%lld %lld %lld", &a, &b, &c);

   //minimum
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

    a = a / 2;
    if (a >= c)
    {
        m = m + c;
    }  
    else
    {
        m = m + a;
    }  
    

    printf("%lld",m);
    return 0;  
}  