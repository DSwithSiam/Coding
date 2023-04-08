#include <stdio.h>  
int main()  
{  
    int a;
    scanf("%d", &a);
    a = a /1000;
    if (a % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;  
}  