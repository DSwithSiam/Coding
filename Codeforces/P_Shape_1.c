#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main()  
{  
    int n ;
    scanf("%d", &n);
    int c = n;
    for(int i=1; i<=n ; i++)
    {
        for (int j=1; j<=c; j++)
        {
            printf("%c", '*'); 
        }
        printf("\n");
        c--;
        
    }
    return 0;  
}  