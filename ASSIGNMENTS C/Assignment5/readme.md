# Assignment-05: Dynamic Array Management

## Objective

The objective of this assignment is to understand dynamic memory allocation in C using `malloc()` and `free()`. It also helps in learning how to store and process data dynamically using pointers and arrays.

---

## Problem Statement

Write a menu-driven C program that dynamically allocates memory to store student marks using `malloc()`. The program should display the marks, calculate the highest mark, lowest mark, total marks, average marks, and release the allocated memory using `free()` before the program ends.

---

## Algorithm

1. Start the program.
2. Enter the number of students.
3. Allocate memory dynamically using `malloc()`.
4. Enter the marks of all students.
5. Display the menu.
6. Perform the selected operation:
   - Display all marks.
   - Calculate highest, lowest, total, and average marks.
7. Free the allocated memory using `free()`.
8. End the program.

---

## Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Memory Allocation | O(1) |
| Input Marks | O(n) |
| Display Marks | O(n) |
| Calculate Statistics | O(n) |
| Memory Release | O(1) |

---

## Space Complexity

- Overall Space Complexity: **O(n)**
- Auxiliary Space: **O(1)**

---

## Sample Input

```
Enter number of students: 5

Enter Student Marks:
85
72
91
68
78

Enter your choice: 2
```

---

## Sample Output

```
------ Statistics ------
Highest Marks : 91
Lowest Marks  : 68
Total Marks   : 394
Average Marks : 78.80

Memory Released Successfully.
```

---

## Learning Outcome

- Learned how to use dynamic memory allocation with `malloc()`.
- Understood the importance of releasing memory using `free()`.
- Practiced using pointers with dynamically allocated arrays.
- Calculated basic statistics such as highest, lowest, total, and average marks.
- Improved understanding of dynamic memory management in C programming.