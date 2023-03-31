#include <stdio.h>  
 int main()  
 {  
    /*
    int n , fistNumber, lastNumber;
    scanf("%d", &fistNumber);
    scanf("%d", &lastNumber);
    n = fistNumber;
    while (n <= lastNumber) 
    {
        printf("Test Case %d : %d\n", n, n);
        n++;
    }
    */ 

   /* int a = 1;
    while (a <= 100)
    {
        printf("%d\n", a);
        a++;
        if (a > 10)
        {
            break;
        }
    }
    */

    // int n = 0;  
    // while (n < 10) {  
    //     n = n + 1;  
    //     if (n % 2 != 0) {  
    //         continue;  
    //     }  
    //     printf("%d\n", n);  
    // }  

    
    // int a = 1, b = 5;
    // while (a <= 10){
    //     printf("%d X %d = %d\n", b, a, b*a );
    //     a++;
    // } 

    // for loop
    int n, i;
    for (n = 1; n <= 20; n = n + 1) {
        printf("Multiplication table: %d\n\n", n);
        int m = 0;
        for (i = 1; i <= 10; i++){
            printf("%d X %d = %d\n", n, i, m = m + n);
        }
        printf("\n");

    }
    return 0;  
 }  