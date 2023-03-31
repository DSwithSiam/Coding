#include <stdio.h>  
 int main()  
 {  
    double a, b, sum;
    a = 9.5;
    b = 8.743;
    sum = a + b;

    printf("Sum is: %0.2lf + %0.2lf = %lf\n", a, b, sum);
    printf("Sum is: %0.2lf\n", sum);
    
     return 0;  
 }  