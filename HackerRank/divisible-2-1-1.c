#include <stdio.h>  
 int main()  
 {  
    int i, a;
    scanf("%d", &a);
    for (i = 21; i <= a; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            printf("%d\n", i);
        }

    }
     return 0;  
 }  