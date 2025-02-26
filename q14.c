#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool palinHelper(char *s, int left, int right) {

    // If the start and end pointers cross
    // each other, it means all characters
    // have matched
    if (left >= right)
        return true;

    // If characters don't match,
    // string is not palindrome
    if (s[left] != s[right])
        return false;

    // Recursively check for the rest of
    // the string
    return palinHelper(s, left + 1, right - 1);
}

void isPalindrome(char* s) {
  
      // Calling the recursive function to check
    // palindrome string
    if (palinHelper(s, 0, strlen(s) - 1))
        printf("\"%s\" is palindrome.\n", s);
    else
        printf("\"%s\" is not palindrome.\n", s);
}

int main() {
  
    // Checking if the given strings are palindrome
    isPalindrome("madam");
    isPalindrome("hello");
    return 0;
}
