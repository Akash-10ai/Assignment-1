# Assignment-10: LeetCode Array Challenge

## Objective

The objective of this assignment is to improve problem-solving skills by implementing common array operations in C. It helps in understanding searching, sorting, and analyzing the time complexity of different algorithms.

---

## Problem Statement

Write a menu-driven C program to perform different operations on an array. The program should find the largest and second largest elements, smallest and second smallest elements, reverse the array, remove duplicate elements, count the frequency of each element, search for an element, sort the array, and analyze the time complexity of each operation.

---

## Algorithm

1. Start the program.
2. Enter the number of elements in the array.
3. Input all array elements.
4. Display the main menu.
5. Perform the selected operation:
   - Display the array.
   - Find the largest and second largest elements.
   - Find the smallest and second smallest elements.
   - Reverse the array.
   - Remove duplicate elements.
   - Count the frequency of each element.
   - Search for an element.
   - Sort the array.
6. Repeat the menu until the user selects Exit.
7. End the program.

---

## Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Display Array | O(n) |
| Largest & Second Largest | O(n) |
| Smallest & Second Smallest | O(n) |
| Reverse Array | O(n) |
| Remove Duplicates | O(n²) |
| Count Frequency | O(n²) |
| Linear Search | O(n) |
| Bubble Sort | O(n²) |

---

## Space Complexity

- Overall Space Complexity: **O(n)**
- Auxiliary Space: **O(1)**

---

## Sample Input

```
Enter number of elements: 6

Enter array elements:
5
8
2
8
1
4

Enter your choice: 2
```

---

## Sample Output

```
Largest = 8
Second Largest = 5

Smallest = 1
Second Smallest = 2

Array Sorted Successfully.

Sorted Array:
1 2 4 5 8
```

---

## Learning Outcome

- Learned to solve common array-based problems in C.
- Improved understanding of searching and sorting algorithms.
- Practiced finding maximum, minimum, and frequency of elements.
- Understood how to remove duplicate elements from an array.
- Learned the importance of time and space complexity while designing algorithms.