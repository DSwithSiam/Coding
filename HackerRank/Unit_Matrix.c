#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main()  
{  
    int n;
    scanf("%d", &n);
    int ar[n][n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int flag = 1;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (j == i)
            {
                if(ar[i][j] != 1)
                {
                    flag = 0;
                }
                continue;
            }
            if (ar[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if (flag != 1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;  
}  