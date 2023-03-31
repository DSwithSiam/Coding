#include <stdio.h>  
 int main()  
 {  
    char ch ;
    scanf("%c", &ch);

    if ('a' <= ch && ch <= 'z') {
        printf("%c is Lower case", ch);
    }
    if ('A' <= ch && ch <= 'Z') {
        printf("%c is Upper case", ch);
    }
    if ('b'<= ch && ch  <= 'd' || 'f' <= ch && ch  <= 'h' || 'j' <= ch && ch  <= 'n' || 'p' <= ch && ch  <= 't' || 'v' <= ch && ch  <= 'z') {
        printf(" and Consonant.");
    }
    if ('B' <= ch && ch <= 'D' || 'F' <= ch && ch  <= 'H' || 'J' <= ch && ch  <= 'N' || 'P' <= ch && ch  <= 'T' || 'V' <= ch && ch  <= 'Z') {
        printf(" and Consonant.");
    }
    if ('a' == ch || 'A' == ch || 'e' == ch || 'i' == ch || 'I' == ch || 'o' == ch || 'O' == ch || 'u' == ch || 'U' == ch) {
        printf(" and Vowel.");
    }
    
    return 0;  
 }  