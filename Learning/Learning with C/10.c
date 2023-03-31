#include <stdio.h>  
 int main()  
 {  
   //  x + y = 15, x – y = 5 হলে x ও y-এর মান কত? Ans: x = 10, y = 5

   // double x, y, x_plus_y, x_minus_y;
   // printf("Enter the value of x + y: ");
   // scanf("%lf", &x_plus_y );
   // printf("Enter the value of x - y: ");
   // scanf("%lf", &x_minus_y );
   // x = (x_plus_y + x_minus_y) / 2;
   // y = (x_plus_y - x_minus_y) / 2;
   // printf("x = %0.2lf\n" "y = %0.2lf\n", x, y);

   //4x + 5y = 14, 5x + 6y = 17 হলে x ও y-এর মান কত?

   double a1, a2, b1, b2, c1, c2, x, y;  
     printf("a1 = ");  
     scanf("%lf", &a1);  
     printf("a2 = ");  
     scanf("%lf", &a2);  
     printf("b1 = ");  
     scanf("%lf", &b1);  
     printf("b2 = ");  
     scanf("%lf", &b2);  
     printf("c1 = ");  
     scanf("%lf", &c1);  
     printf("c2 = ");  
     scanf("%lf", &c2);  
     x = (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);  
     y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);  
     printf("x = %0.2lf, y = %0.2lf\n", x, y);  



   return 0;  
 }  