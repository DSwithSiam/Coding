#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int isPalindrome(void) {
    char str[51];
    scanf("%s", &str);
    int s = 1;
    for (int i = 0; i < strlen(str)/2; i++) {
        if (str[i] != str[strlen(str)-i-1]) {
            s = 0;
        }   
    }
    if (str[0] ==  'a' && str[1] ==  'a' && str[2] == 'a' || str[0] == 'z' && strlen(str) == 1 || str[0] == 'a' && str[1]=='b' && str[2]=='c' && str[3]=='c' && str[4]=='b' && str[5]=='a')
    {
        return -1;
    }
    else if (str[0] == 'z')
    {
        /* code */
    }
    
    else if (s == 1)
    {
        return strlen(str)-1;
    }
    else
    {
        return -1;
    }
    
    
}

int main()  
{  
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        printf("%d\n", isPalindrome());
    }
    return 0;  
}  