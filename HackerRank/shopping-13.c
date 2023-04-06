#include <stdio.h>  
 int main()  
 {  
    int tk;
    scanf("%d", &tk);
    if (tk > 1000)
    {
        tk = tk -1000;
        printf("I will buy Punjabi\n");
        if (tk >= 500)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    }
    else
    {
        printf("Bad luck!");
    }
    
     return 0;  
 }  