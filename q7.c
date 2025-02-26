#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check if the correct number of arguments is provided
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    // Convert the argument from string to integer
    int num = atoi(argv[1]);

    // Print the multiplication table
    printf("Multiplication table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}