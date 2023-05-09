#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main()  
{  
    int r, c;
    scanf("%d %d", &r, &c);
    int ar[r][c];
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int x ;
    scanf("%d", &x);
    int flag = 0;
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            if(x == ar[i][j])
            {
                flag = 1;
            }
        }
    }
    
    if (flag == 0)
    {
        printf("will take number");
    }
    else
    {
        printf("will not take number");
    }
    return 0;  
}  