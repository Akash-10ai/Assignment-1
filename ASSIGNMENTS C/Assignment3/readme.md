# Assignment-03: Pointer Playground

## Objective

The objective of this assignment is to understand the basic concepts of pointers in C programming. It helps in learning how pointers store memory addresses, access values using dereferencing, swap variables using pointers, traverse arrays, and perform pointer arithmetic.

---

## Problem Statement

Write a menu-driven C program to demonstrate different pointer operations such as displaying memory addresses, dereferencing pointers, swapping two numbers using pointers, traversing an array using pointers, and performing pointer arithmetic.

---

## Algorithm

1. Start the program.
2. Display the menu.
3. Read the user's choice.
4. Perform the selected operation:
   - Display the memory address and value of a variable.
   - Swap two numbers using pointers.
   - Traverse an array using pointers.
   - Demonstrate pointer arithmetic.
5. Display the result.
6. Repeat the menu until the user selects Exit.
7. End the program.

---

## Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Display Address | O(1) |
| Dereference Pointer | O(1) |
| Swap Numbers | O(1) |
| Traverse Array | O(n) |
| Pointer Arithmetic | O(n) |

---

## Space Complexity

- Overall Space Complexity: **O(n)** (for the input array)
- Auxiliary Space: **O(1)**

---

## Sample Input

```
Enter your choice: 2

Enter first number: 10
Enter second number: 20
```

---

## Sample Output

```
Before Swapping
First Number = 10
Second Number = 20

After Swapping
First Number = 20
Second Number = 10
```

---

## Learning Outcome

- Learned the basics of pointers in C.
- Understood how memory addresses are stored and accessed.
- Learned pointer dereferencing and pointer arithmetic.
- Implemented swapping using call by reference.
- Practiced traversing arrays using pointers instead of array indexing.
