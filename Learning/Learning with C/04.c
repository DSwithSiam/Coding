#include <stdio.h>  
 int main()  
 {  
    //  int num1, num2;  
    //  printf("Please enter a number: ");  
    //  scanf("%d", &num1);  
    //  printf("Please enter another number: ");  
    //  scanf("%d", &num2);  

    //  printf("%d + %d = %d\n", num1, num2, num1+num2);  
    //  printf("%d - %d = %d\n", num1, num2, num1-num2);  
    //  printf("%d * %d = %d\n", num1, num2, num1*num2);  
    //  printf("%d / %d = %d\n", num1, num2, num1/num2);  


    double num1, num2, value;
    char sign;
    printf("Please enter a number: ");
    scanf("%lf", &num1);
    printf("Please enter the another number: ");
    scanf("%lf", &num2);
    value = num1 + num2;
    sign = '+';
    printf("%lf %c %lf = %lf\n", num1, sign, num2, value);
    
    value = num1 - num2;
    sign = '-';
    printf("%lf %c %lf = %lf\n", num1, sign, num2, value);
    
    value = num1 * num2;
    sign = '*';
    printf("%lf %c %lf = %lf\n", num1, sign, num2, value);
    
    value = num1 / num2;
    sign = '/';
    printf("%lf %c %lf = %lf\n", num1, sign, num2, value);


     return 0;  
 }  