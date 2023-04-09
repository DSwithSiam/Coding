#include <stdio.h>  
int main()  
{  
    int n, bigNum = 0;
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {   
        int a;
        scanf("%d", &a);
        if (bigNum < a)
        {
            bigNum = a;
        }
    }
    printf("%d\n", bigNum);
    return 0;  
}  