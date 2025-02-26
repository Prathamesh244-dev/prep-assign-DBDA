#include <stdio.h>
#include <string.h>

#define SIZE 10

void findDuplicates(char *arr[], int size) {
    int visited[SIZE];
    memset(visited, 0, sizeof(visited));
    
    printf("Duplicate strings:\n");
    for (int i = 0; i < size; i++) {
        if (visited[i]) continue;
        int duplicateFound = 0;
        for (int j = i + 1; j < size; j++) {
            if (strcmp(arr[i], arr[j]) == 0) {
                visited[j] = 1;
                duplicateFound = 1;
            }
        }
        if (duplicateFound) {
            printf("%s\n", arr[i]);
        }
    }
}

int main() {
    char *arr[SIZE] = {"apple", "banana", "cherry", "apple", "date", "banana", "fig", "grape", "cherry", "date"};
    
    findDuplicates(arr, SIZE);
    
    return 0;
}