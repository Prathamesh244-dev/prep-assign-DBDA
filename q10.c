#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 10
#define NAME_LENGTH 50

void sortNames(char names[MAX_STUDENTS][NAME_LENGTH], int count) {
    char temp[NAME_LENGTH];
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    char nameOfStudents[MAX_STUDENTS][NAME_LENGTH];
    int count;

    printf("Enter the number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &count);
    getchar(); // Consume newline character

    if (count > MAX_STUDENTS || count <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    printf("Enter the names of %d students:\n", count);
    for (int i = 0; i < count; i++) {
        printf("Student %d: ", i + 1);
        fgets(nameOfStudents[i], NAME_LENGTH, stdin);
        nameOfStudents[i][strcspn(nameOfStudents[i], "\n")] = 0; // Remove newline
    }

    sortNames(nameOfStudents, count);

    printf("\nSorted list of students:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}
