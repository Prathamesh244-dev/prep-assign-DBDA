#include <stdio.h>
#include <string.h>

void rev(char* s, int l, int r) {

    // Base case is when l becomes greater than r
    if (l >= r) return;

    // Swap characters
    char t = s[l];
    s[l] = s[r];
    s[r] = t;

    // Recursively call the function with updated
  	// index pointers
    rev(s, l + 1, r - 1);
}

int main() {
    char s[100] = "abcde";

    rev(s, 0, strlen(s) - 1);
    
    printf("%s", s);
    return 0;
}
