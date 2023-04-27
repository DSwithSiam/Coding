#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main()  
{  
    int n;
    scanf("%d", &n);
    int ar[n], even = 0, odd = 0;
    for (int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
      for (int i=0; i<n; i++)
    {
        if (ar[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    

    printf("%d %d", even, odd);
    return 0;  
}  