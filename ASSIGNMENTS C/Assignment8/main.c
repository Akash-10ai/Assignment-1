/*
=========================================================
Assignment 08 : Employee Payroll System
Language      : C
Concepts Used : Structures, Arrays,
                Functions, Conditional Statements
=========================================================
*/

#include <stdio.h>

#define MAX 100

// Structure Definition
struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float tax;
    float grossSalary;
    float netSalary;
};

// Function Prototypes
void addEmployee(struct Employee emp[], int *count);
void calculateSalary(struct Employee *e);
void displayEmployees(struct Employee emp[], int count);
void sortByNetSalary(struct Employee emp[], int count);

int main()
{
    struct Employee emp[MAX];
    int count = 0;
    int choice;

    do
    {
        printf("\n========== EMPLOYEE PAYROLL SYSTEM ==========\n");
        printf("1. Add Employee\n");
        printf("2. Display Salary Report\n");
        printf("3. Sort Employees by Net Salary\n");
        printf("4. Exit\n");
        printf("=============================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addEmployee(emp, &count);
                break;

            case 2:
                displayEmployees(emp, count);
                break;

            case 3:
                sortByNetSalary(emp, count);
                printf("Employees sorted successfully.\n");
                break;

            case 4:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}

// Add Employee
void addEmployee(struct Employee emp[], int *count)
{
    if(*count >= MAX)
    {
        printf("Employee list is full.\n");
        return;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp[*count].id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[*count].name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp[*count].basicSalary);

    calculateSalary(&emp[*count]);

    (*count)++;

    printf("Employee Added Successfully.\n");
}

// Calculate Salary
void calculateSalary(struct Employee *e)
{
    // HRA = 20% of Basic Salary
    e->hra = 0.20 * e->basicSalary;

    // DA = 10% of Basic Salary
    e->da = 0.10 * e->basicSalary;

    // Gross Salary
    e->grossSalary = e->basicSalary + e->hra + e->da;

    // Tax Calculation
    if(e->grossSalary > 50000)
    {
        e->tax = 0.10 * e->grossSalary;
    }
    else
    {
        e->tax = 0.05 * e->grossSalary;
    }

    // Net Salary
    e->netSalary = e->grossSalary - e->tax;
}

// Display Salary Report
void displayEmployees(struct Employee emp[], int count)
{
    int i;

    if(count == 0)
    {
        printf("No Employee Records Found.\n");
        return;
    }

    printf("\n------------------------------------------------------------------------------------------------------\n");
    printf("ID\tName\t\tBasic\tHRA\tDA\tGross\tTax\tNet\n");
    printf("------------------------------------------------------------------------------------------------------\n");

    for(i = 0; i < count; i++)
    {
        printf("%d\t%-15s%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].basicSalary,
               emp[i].hra,
               emp[i].da,
               emp[i].grossSalary,
               emp[i].tax,
               emp[i].netSalary);
    }
}

// Sort Employees by Net Salary
void sortByNetSalary(struct Employee emp[], int count)
{
    int i, j;
    struct Employee temp;

    for(i = 0; i < count - 1; i++)
    {
        for(j = 0; j < count - i - 1; j++)
        {
            if(emp[j].netSalary > emp[j + 1].netSalary)
            {
                temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }
}