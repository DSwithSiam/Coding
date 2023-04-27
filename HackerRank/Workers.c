#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main()  
{  
    int a, b, d, day;
    scanf("%d %d %d", &a, &b, &d);
    day = (a*d)/b;
    printf("%d", day);
    return 0;  
}  