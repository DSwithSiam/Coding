#include <stdio.h>  
int main()  
{  
    int n;
    scanf("%d", &n);
    int even = 0, odd = 0, posi = 0, neg = 0;
    for (int i = 1; i <= n; i++)
    {   
        int num;
        scanf ("%d", &num);

        if (num % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (num > 0)
        {
            posi++;
        }
        else if (num < 0)
        {
            neg++;
        } 
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, posi, neg);
    return 0;  
}  