#include <stdio.h>
#include <string.h>

struct emp {
    char first_name[50];
    char last_name[50];
    double monthly_salary;
};

void emp_init(struct emp *e, const char *first, const char *last, double sal) {
    strcpy(e->first_name, first);
    strcpy(e->last_name, last);
    e->monthly_salary = sal > 0 ? sal : 0;
}

void set_salary(struct emp *e, double sal) {
    if (sal > 0) {
        e->monthly_salary = sal;
    }
}

void emp_display(struct emp *e) {
    printf("Employee: %s %s\n", e->first_name, e->last_name);
    printf("Monthly Salary: %.2lf\n", e->monthly_salary);
    printf("Yearly Salary: %.2lf\n", e->monthly_salary * 12);
}

int main() {
    struct emp emp1, emp2;
    
    emp_init(&emp1, "John", "Doe", 5000);
    emp_init(&emp2, "Jane", "Smith", 6000);
    
    printf("Before Raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);
    
    set_salary(&emp1, emp1.monthly_salary * 1.10);
    set_salary(&emp2, emp2.monthly_salary * 1.10);
    
    printf("\nAfter 10%% Raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);
    
    return 0;
}