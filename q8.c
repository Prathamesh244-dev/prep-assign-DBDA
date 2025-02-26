#include <stdio.h>
#include <string.h>

// Define structure for Student
typedef struct {
    char studentName[50];
    char rollNo[20];
    float totalMarks;
} Student;

// Function to read student details
void readStudent(Student *s) {
    printf("Enter Student Name: ");
    fgets(s->studentName, sizeof(s->studentName), stdin);
    s->studentName[strcspn(s->studentName, "\n")] = 0; // Remove newline character
    
    printf("Enter Roll Number: ");
    fgets(s->rollNo, sizeof(s->rollNo), stdin);
    s->rollNo[strcspn(s->rollNo, "\n")] = 0; // Remove newline character
    
    printf("Enter Total Marks: ");
    scanf("%f", &s->totalMarks);
}

// Function to display student details
void displayStudent(const Student *s) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s->studentName);
    printf("Roll Number: %s\n", s->rollNo);
    printf("Total Marks: %.2f\n", s->totalMarks);
}

int main() {
    Student s;
    getchar(); // Consume newline left in buffer
    readStudent(&s);
    displayStudent(&s);
    return 0;
}

