#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int b, c = 0;
    if (n % 2 == 0)
    {
        b = n / 2;
    }
    else
    {
        b = (n / 2);
        b = b + 1;
    }
    int br[b];
 
    for (int i = 0; i < n; i++)
    {
        if (i % 2 ==0)
        {
            br[c] = ar[i];
            c++;
        }
        else if (i == 0)
        {
            b++;
            br[c] = ar[i];
            c++;
        } 
    }
    
    
    for (int i = (b - 1); i >= 0; i--)
    {
        printf("%d ", br[i]);
    }
    return 0;
}