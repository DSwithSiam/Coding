#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main()  
{  
    int raw, col;
    scanf("%d %d", &raw , &col);
    int ar[raw][col];

    for (int i = 0; i < raw; i++)
    {
        for (int j=0; j<col; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    for (int i = 0; i < raw; i++)
    {
        for (int j=col-1; j>=0; j--)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
    
    return 0;  
}  