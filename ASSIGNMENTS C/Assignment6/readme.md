# Assignment-06: Inventory Management System

## Objective

The objective of this assignment is to learn how to use structures and arrays in C programming to manage product records. It also helps in understanding searching, sorting, and performing basic inventory calculations.

---

## Problem Statement

Write a menu-driven C program to create an Inventory Management System. The program should store Product ID, Product Name, Price, and Quantity. It should allow the user to add products, search for a product, update product details, sort products by price, and calculate the total inventory value.

---

## Algorithm

1. Start the program.
2. Display the main menu.
3. Read the user's choice.
4. Perform the selected operation:
   - Add a new product.
   - Display all products.
   - Search for a product using Product ID.
   - Update product details.
   - Sort products based on price.
   - Calculate the total inventory value.
5. Display the result.
6. Repeat the menu until the user selects Exit.
7. End the program.

---

## Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Add Product | O(1) |
| Display Products | O(n) |
| Search Product | O(n) |
| Update Product | O(n) |
| Sort by Price | O(n²) |
| Total Inventory Value | O(n) |

---

## Space Complexity

- Overall Space Complexity: **O(n)**
- Auxiliary Space: **O(1)**

---

## Sample Input

```
Enter your choice: 1

Enter Product ID: 101
Enter Product Name: Laptop
Enter Product Price: 55000
Enter Quantity: 3
```

---

## Sample Output

```
Product Added Successfully.

Product List

ID      Name        Price      Quantity
101     Laptop      55000.00   3

Total Inventory Value = 165000.00
```

---

## Learning Outcome

- Learned how to use structures to store product information.
- Understood how arrays of structures are used in real-world applications.
- Implemented searching and sorting techniques.
- Calculated the total inventory value using product price and quantity.
- Improved programming skills by developing a simple inventory management system.