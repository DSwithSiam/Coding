#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main()  
{  
    int n;
    scanf("%d", &n);

    int c = 1, s = n-1;
    for(int i=1; i<=n*2; i++)
    {   
        for(int j=1; j<=s; j++)
        {
            printf("%c", ' ');
        }

        for(int j=1; j<=c; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
        if(i < n)
        {
            c = c+2;
            s--;
        } 
        else if (i > n)
        {
            c = c-2;
            s++;
        }
        
        
    }
    return 0;
}  