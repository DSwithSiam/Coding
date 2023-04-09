#include <stdio.h>  
int main()  
{  
    char a[10000];
    fgets(a, sizeof(a), stdin);
    
    printf("Hello, %s", a);
    return 0;  
}  