#include <stdio.h>
#include <string.h>

int main() {
    // Initialize an array to store the counts
    int c[26] = {0};

    // Read input string from standard input
    char s[1001];
    scanf("%s", s);

    // Iterate over the input string and update the counts
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        c[s[i] - 'a']++;
    }

    // Print the counts for each letter
    for (int i = 0; i < 26; i++) {
        printf("%c - %d\n", 'a' + i, c[i]);
    }

    return 0;
}