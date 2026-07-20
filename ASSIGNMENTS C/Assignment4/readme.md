# Assignment-04: Student Record Management System

## Objective

The objective of this assignment is to learn how to use structures in C programming to manage multiple student records. It also helps in understanding arrays of structures, functions, and basic record management operations like add, search, update, and delete.

---

## Problem Statement

Write a menu-driven C program to create a Student Record Management System using structures. The program should allow the user to add student records, display all records, search for a student by ID, update student details, and delete student records.

---

## Algorithm

1. Start the program.
2. Display the main menu.
3. Read the user's choice.
4. Perform the selected operation:
   - Add a new student record.
   - Display all student records.
   - Search a student using Student ID.
   - Update student details.
   - Delete a student record.
5. Display the result.
6. Repeat the menu until the user selects Exit.
7. End the program.

---

## Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Add Student | O(1) |
| Display Students | O(n) |
| Search Student | O(n) |
| Update Student | O(n) |
| Delete Student | O(n) |

---

## Space Complexity

- Overall Space Complexity: **O(n)**
- Auxiliary Space: **O(1)**

---

## Sample Input

```
Enter your choice: 1

Enter Student ID: 101
Enter Student Name: Akash Kumar
Enter Age: 20
Enter Marks: 89
```

---

## Sample Output

```
Student Added Successfully.

Student Records

ID      Name            Age     Marks
101     Akash Kumar     20      89.00
```

---

## Learning Outcome

- Learned how to use structures in C programming.
- Understood how arrays of structures are used to store multiple records.
- Implemented add, search, update, display, and delete operations.
- Improved understanding of functions and modular programming.
- Gained practical experience in developing a simple record management system.