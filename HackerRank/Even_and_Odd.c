#include <stdio.h>  
int main()  
{  
    int n, even = 0, odd = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int t = 0;
        scanf("%d", &t);
        if (t % 2 == 0)
        {
            even = even + t;
        }
        else
        {
            odd = odd + t;
        }
    }
    printf("%d %d", even, odd);
    return 0;  
}  