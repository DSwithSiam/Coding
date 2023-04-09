#include <stdio.h>  
int main()  
{   
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int num;
        long long int fact = 1;
        scanf("%d", &num);
        for (int j = 1; j <= num; j++)
        {
            fact = fact * j;
        }
        printf("%lld\n", fact);
    }
    return 0;  
}  