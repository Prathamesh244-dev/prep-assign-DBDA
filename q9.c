#include <stdio.h>

int main() {
    int num;
    
    printf("Enter Number: ");
    scanf("%d", &num);
    
    printf("Given Number: %d\n", num);
    printf("Binary equivalent: ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
    printf("Octal equivalent: %o\n", num);
    printf("Hexadecimal equivalent: %X\n", num);
    
    return 0;
}