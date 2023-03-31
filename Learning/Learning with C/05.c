#include <stdio.h>  
 int main()  
 {  
    // int a;
    // printf("Enter the number: ");
    // scanf("%d", &a);
    // if (a > 0) {
    //     printf("The Number is Positive\n");
    // }
    // else if (a < 0) {
    //     printf("The Number is Negative\n");
    // }
    // else {
    //     printf("The Number is Zero\n");
    // }
    // return 0;

int selection;
printf("Select what u wanna do:\n 1.Calculation.\n 2.Letter assement.\n");
scanf("%d", &selection);
if(selection==1) { int sel2;
printf("Select de type of calculation u wanna do:\n 1.All Real Number.\n 2.Only Integers.\n");
scanf("%d", &sel2);
if(sel2==1) {{
double n1, n2, res;
char sym;
printf("Enter de 1st number: ");
scanf("%lf", &n1);
printf("Enter the symble: ");
scanf("%c", &sym);
scanf("%c", &sym);
printf("Enter the last number: ");
scanf("%lf", &n2);
if (sym== '+') {
printf("\n %0.2lf + %0.2lf = %0.2lf\n", n1, n2, n1+n2);}
else if (sym== '-') {
printf("\n %0.2lf - %0.2lf = %0.2lf\n", n1, n2, n1-n2);}
else if (sym== '*') {
printf("\n %0.2lf * %0.2lf = %0.4lf\n", n1, n2, n1*n2);}
else if (sym== '/') {
if(n1==0) {
printf("\nThe result is: Undefined.\n");}
else{
printf("\n %0.2lf / %0.2lf = %0.4lf\n", n2, n1, n2/n1);}}}};
if(sel2==2) {
int n1, n2, res, rem, quo;
char sym;
printf("Enter de 1st number: ");
scanf("%d", &n1);
printf("Enter de symble: ");
scanf("%c", &sym);
scanf("%c", &sym);
printf("Enter the last number: ");
scanf("%d", &n2);
if (sym== '+') {
printf("%d + %d = %d", n1, n2, n1+n2 );}
else if (sym== '-') {
printf("%d - %d = %d", n1, n2, n1-n2);}
else if (sym== '*') {
printf("%d * %d = %d", n1, n2, n1*n2);}
else if (sym== '/') {
if(n1==0) {
printf("\nThe result is: Undefined.\n");}
else {
rem= n2 % n1;
quo= n2 / n1;
printf("...\nThe Quotient is: %d\n", quo);
printf("And the Reminder is: %d\n", rem);}
}
}
}
else if(selection==2) {
char ch;
printf("Enter a letter: ");
scanf("%c", &ch);
scanf("%c", &ch);
if(ch >= 'a' && ch <= 'z') {
printf("`%c' is in lower case ", ch);};
if(ch >= 'A' && ch <= 'Z') {
printf("`%c' is in higher case ", ch);};
if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
printf("and it is a vowel.\n");};
if((ch >= 'b' && ch <= 'd') || (ch >= 'B' && ch <= 'D') || (ch >= 'f' && ch <= 'h') || (ch >= 'F' && ch <= 'H') || (ch >= 'j' && ch <= 'n') || (ch >= 'J' && ch <= 'N') || (ch >= 'p' && ch <= 't') || (ch >= 'P' && ch <= 'T') || (ch >= 'v' && ch <= 'z') || (ch >= 'V' && ch <= 'Z')) {
printf("and it is a consonant.\n");
};}
return 0;

}  