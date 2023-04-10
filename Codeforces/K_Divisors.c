#include <stdio.h>  
int main()  
{  
    int n;
    scanf("%d", &n);
    int a = n / 2;
    for (int i = 1; i <= a; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
    }
    printf("%d\n", n);
    return 0;  
}  