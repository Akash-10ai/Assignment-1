# Assignment-01: Student Marks Analyzer

## Objective

To develop a menu-driven C program that stores and analyzes the marks of N students using arrays and functions. The program demonstrates searching, sorting, and basic statistical operations.

---

## Problem Statement

Develop a menu-driven application to store marks of N students. The program should display marks, calculate the highest mark, lowest mark, total marks, average marks, search for a student's marks, and sort the marks in ascending order.

---

## Algorithm

1. Start the program.
2. Enter the number of students.
3. Input the marks of all students.
4. Display the menu.
5. Perform the selected operation:
   - Display all marks.
   - Find the highest mark.
   - Find the lowest mark.
   - Calculate total and average marks.
   - Search for a particular mark.
   - Sort the marks in ascending order.
6. Repeat the menu until the user chooses Exit.
7. End the program.

---

## Time Complexity

| Operation | Complexity |
|-----------|------------|
| Input Marks | O(n) |
| Display Marks | O(n) |
| Highest Mark | O(n) |
| Lowest Mark | O(n) |
| Total & Average | O(n) |
| Search Mark | O(n) |
| Bubble Sort | O(n²) |

---

## Space Complexity

- Overall Space Complexity: **O(n)**
- Auxiliary Space: **O(1)**

---

## Sample Input

```
Enter number of students: 5

Enter marks:
85
72
91
68
78

Choice: 4
```

---

## Sample Output

```
Total Marks = 394
Average Marks = 78.80

Highest Mark = 91

Lowest Mark = 68

Sorted Marks:
68
72
78
85
91
```

---

## Learning Outcome

- Learned how to use arrays in C.
- Understood the use of functions for modular programming.
- Implemented searching and sorting algorithms.
- Calculated statistical values such as highest, lowest, total, and average.
- Improved problem-solving skills using loops and arrays.
