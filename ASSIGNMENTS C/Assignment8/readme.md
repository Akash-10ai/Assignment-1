# Assignment-08: Employee Payroll System

## Objective

The objective of this assignment is to learn how to use structures, arrays, functions, and conditional statements in C programming to develop a simple Employee Payroll System. It also helps in understanding salary calculations and record management.

---

## Problem Statement

Write a menu-driven C program to create an Employee Payroll System. The program should accept employee details, calculate HRA, DA, Tax, Gross Salary, and Net Salary. It should also display the salary report and sort employees based on their net salary.

---

## Algorithm

1. Start the program.
2. Display the main menu.
3. Read the user's choice.
4. Perform the selected operation:
   - Add a new employee.
   - Calculate HRA, DA, Tax, Gross Salary, and Net Salary.
   - Display the salary report.
   - Sort employees based on net salary.
5. Display the result.
6. Repeat the menu until the user selects Exit.
7. End the program.

---

## Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Add Employee | O(1) |
| Salary Calculation | O(1) |
| Display Salary Report | O(n) |
| Sort Employees | O(n²) |

---

## Space Complexity

- Overall Space Complexity: **O(n)**
- Auxiliary Space: **O(1)**

---

## Sample Input

```
Enter your choice: 1

Enter Employee ID: 201
Enter Employee Name: Rahul Sharma
Enter Basic Salary: 40000
```

---

## Sample Output

```
Employee Added Successfully.

Employee Salary Report

ID      Name            Basic Salary    Gross Salary    Net Salary
201     Rahul Sharma    40000.00        52000.00        46800.00
```

---

## Learning Outcome

- Learned how to use structures to store employee details.
- Understood how to calculate HRA, DA, Tax, Gross Salary, and Net Salary.
- Practiced using conditional statements for salary calculations.
- Implemented sorting and displaying employee records.
- Improved understanding of menu-driven programming using functions.