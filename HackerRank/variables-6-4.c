#include <stdio.h>  
 int main()  
 {  
    int a;
    long long int b;
    float c;
    char d;

    scanf("%d\n %lld\n %f\n %c\n", &a, &b, &c, &d);
    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%0.2f\n", c);
    printf("%c\n", d);
    return 0;  
 }  