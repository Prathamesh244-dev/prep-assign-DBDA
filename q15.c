#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define ALPHABET_COUNT 26

void countOccurrences(char *str) {
    int freq[ALPHABET_COUNT] = {0};
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            freq[toupper(str[i]) - 'A']++;
        }
    }
    
    printf("Letter occurrences:\n");
    for (int i = 0; i < ALPHABET_COUNT; i++) {
        if (freq[i] > 0) {
            printf("%c : %d\n", i + 'A', freq[i]);
        }
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;
    
    countOccurrences(str);
    
    return 0;
}
