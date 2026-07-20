# Assignment-09: Dynamic Array Operations

## Objective

The objective of this assignment is to understand dynamic memory allocation in C programming and perform basic array operations. It also helps in learning searching techniques and comparing the performance of linear search and binary search.

---

## Problem Statement

Write a menu-driven C program that creates a dynamic array using `malloc()`. The program should perform operations such as insertion, deletion, updating, displaying elements, linear search, binary search, and compare the time complexity of both searching methods.

---

## Algorithm

1. Start the program.
2. Enter the size of the array.
3. Allocate memory dynamically using `malloc()`.
4. Enter the array elements.
5. Display the main menu.
6. Perform the selected operation:
   - Display the array.
   - Insert an element.
   - Delete an element.
   - Update an element.
   - Perform Linear Search.
   - Sort the array.
   - Perform Binary Search.
7. Repeat the menu until the user selects Exit.
8. Release the allocated memory using `free()`.
9. End the program.

---

## Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Display Array | O(n) |
| Insert Element | O(n) |
| Delete Element | O(n) |
| Update Element | O(1) |
| Linear Search | O(n) |
| Bubble Sort | O(n²) |
| Binary Search | O(log n) |

---

## Space Complexity

- Overall Space Complexity: **O(n)**
- Auxiliary Space: **O(1)**

---

## Sample Input

```
Enter initial size of array: 5

Enter array elements:
10
20
30
40
50

Enter your choice: 5
Enter element to search: 30
```

---

## Sample Output

```
Element Found at Position 3

Array Sorted Successfully.

Enter element to search: 40
Element Found at Position 4
```

---

## Learning Outcome

- Learned how to allocate memory dynamically using `malloc()`.
- Performed insertion, deletion, updating, and display operations on a dynamic array.
- Understood the difference between Linear Search and Binary Search.
- Learned the importance of sorting before performing Binary Search.
- Improved programming skills using arrays, pointers, and dynamic memory allocation.