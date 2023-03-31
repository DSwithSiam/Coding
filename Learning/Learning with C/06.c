#include <stdio.h>  
 int main()  
 {  
    
    // int num, remainder;
    // scanf("%d", &num);
    // remainder = num % 2;
    // if (remainder == 0) {
    //     printf("%d is Even\n", num);
    // }
    // else {
    //     printf("%d is Odd\n", num);
    // }

    int number,v, r, x;
    scanf("%d", &number);
    scanf("%d", &v);

    r = number/v;
    x = number - (v * r);
    printf("%d", x);    
    return 0;  
 }  