#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
char  co(void)
{
    char ar[10001];
    scanf("%s", &ar);

    if (strlen(ar) < 5)
    {
        printf("%s\n", ar);
    }
    else
    {
        printf("%c%d%c\n", ar[0], strlen(ar)-2, ar[strlen(ar)-1]);
    }
    
}
int main()  
{  
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        co();
    }
    
    return 0;  
}  