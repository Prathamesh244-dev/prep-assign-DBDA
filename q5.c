#include <stdio.h> 
 
int main() { 
    char ch; 
 
    // Prompt the user to enter a character 
    printf("Enter a character: "); 
    scanf("%c", &ch); 
 
    // Check if the character is uppercase 
    if (ch >= 'A' && ch <= 'Z') { 
        printf("%c is an uppercase letter.\n", ch); 
    } 
    // Check if the character is lowercase 
    else if (ch >= 'a' && ch <= 'z') { 
        printf("%c is a lowercase letter.\n", ch); 
    } 
    // If it's neither 
    else { 
        printf("%c is not an uppercase or lowercase letter.\n", ch); 
    } 
 
    return 0; 
}