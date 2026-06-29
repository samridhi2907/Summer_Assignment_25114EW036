#include <stdio.h>

// Define the structure for employee details
struct Employee {
    int id;            // Employee ID
    char name[50];     // Employee Name
    float basic_salary; // Employee Basic Salary
    float bonus;       // Employee Bonus
    float total_salary; // Employee Total Salary (Basic + Bonus)
};

// Function to calculate total salary
void calculateTotalSalary(struct Employee *emp) {
    emp->total_salary = emp->basic_salary + emp->bonus;
}

int main() {
    int num_employees, i;

    // Ask user for the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    // Declare an array of structures to hold details for multiple employees
    struct Employee employees[num_employees];

    // Taking input for each employee
    for (i = 0; i < num_employees; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &employees[i].id);

        printf("Enter Employee Name: ");
        scanf("%s", employees[i].name);

        printf("Enter Employee Basic Salary: ");
        scanf("%f", &employees[i].basic_salary);

        printf("Enter Employee Bonus: ");
        scanf("%f", &employees[i].bonus);

        // Calculate the total salary for the current employee
        calculateTotalSalary(&employees[i]);
    }

    // Displaying the employee details along with the total salary
    printf("\nEmployee Details:\n");
    for (i = 0; i < num_employees; i++) {
        printf("\nDetails of Employee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Basic Salary: %.2f\n", employees[i].basic_salary);
        printf("Bonus: %.2f\n", employees[i].bonus);
        printf("Total Salary: %.2f\n", employees[i].total_salary);
    }

    return 0; // Indicate that the program ended successfully
}
