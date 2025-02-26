#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float average;
    char grade;
    
    printf("Enter marks for 5 subjects: \n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    
    average = total / 5.0;
    
    if (average >= 90) 
        grade = 'S';
    else if (average >= 80)
        grade = 'A';
    else if (average >= 70)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else
        grade = 'F';
    
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);
    
    return 0;
}
