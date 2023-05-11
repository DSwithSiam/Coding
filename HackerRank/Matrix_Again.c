#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main()  
{  
    int raw, col;
    scanf("%d %d", &raw, &col);
    int ar[raw][col];
    for (int i=0; i<raw; i++)
    {
        for (int j=0; j<col; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    for (int i=0; i<col; i++)
    {
        printf("%d ", ar[raw-1][i]);
    }
    printf("\n");
    for (int i=0; i<raw; i++)
    {
        printf("%d ", ar[i][col-1]);
    }

    return 0;  
}  