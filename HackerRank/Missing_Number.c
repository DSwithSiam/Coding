#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
long long int Missing (void)
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long int sum, s; 
    sum = b + c + d;
    s = a - sum;
    return s;

}
int main()  
{  
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%lld\n", Missing());
    }
    return 0;  
}  