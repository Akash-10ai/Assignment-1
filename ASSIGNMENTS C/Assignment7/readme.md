# Assignment-07: Hospital Patient Management System

## Objective

The objective of this assignment is to learn how to use structures, arrays, strings, and functions in C programming by developing a simple Hospital Patient Management System. It also helps in understanding how to manage records using different operations.

---

## Problem Statement

Write a menu-driven C program to create a Hospital Patient Management System. The program should allow the user to register patients, display all patient records, search a patient by Patient ID, update patient information, and delete patient records.

---

## Algorithm

1. Start the program.
2. Display the main menu.
3. Read the user's choice.
4. Perform the selected operation:
   - Register a new patient.
   - Display all patient records.
   - Search for a patient using Patient ID.
   - Update patient information.
   - Delete a patient record.
5. Display the result.
6. Repeat the menu until the user selects Exit.
7. End the program.

---

## Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Register Patient | O(1) |
| Display Patients | O(n) |
| Search Patient | O(n) |
| Update Patient | O(n) |
| Delete Patient | O(n) |

---

## Space Complexity

- Overall Space Complexity: **O(n)**
- Auxiliary Space: **O(1)**

---

## Sample Input

```
Enter your choice: 1

Enter Patient ID: 101
Enter Patient Name: Rahul Sharma
Enter Age: 25
Enter Gender: Male
Enter Disease: Fever
```

---

## Sample Output

```
Patient Registered Successfully.

Patient Records

ID      Name            Age     Gender    Disease
101     Rahul Sharma    25      Male      Fever
```

---

## Learning Outcome

- Learned how to use structures to store patient information.
- Understood how arrays of structures help manage multiple records.
- Implemented add, search, update, display, and delete operations.
- Improved understanding of functions and menu-driven programming.
- Gained practical experience in building a simple hospital management system.