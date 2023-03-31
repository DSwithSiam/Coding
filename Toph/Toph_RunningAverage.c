#include <stdio.h>  
 int main()  
 {  
    double a, x, b, sum = 0;
    scanf("%lf", &a);
    for (x = 1; x <= a; x++ ){
        scanf("%lf", &b);
        sum = sum + b;
        printf("%lf\n", sum / x);
    }
    return 0;  
}  