/*
=====================================================
Assignment 06 : Inventory Management System
Language      : C
Concepts Used : Structures, Arrays,
                Searching, Sorting
=====================================================
*/

#include <stdio.h>

#define MAX 100

// Structure Definition
struct Product
{
    int id;
    char name[50];
    float price;
    int quantity;
};

// Function Prototypes
void addProducts(struct Product products[], int *count);
void displayProducts(struct Product products[], int count);
void searchProduct(struct Product products[], int count);
void updateProduct(struct Product products[], int count);
void sortByPrice(struct Product products[], int count);
void totalInventoryValue(struct Product products[], int count);

int main()
{
    struct Product products[MAX];
    int count = 0;
    int choice;

    do
    {
        printf("\n========== INVENTORY MANAGEMENT ==========\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Product\n");
        printf("5. Sort by Price\n");
        printf("6. Total Inventory Value\n");
        printf("7. Exit\n");
        printf("==========================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addProducts(products, &count);
                break;

            case 2:
                displayProducts(products, count);
                break;

            case 3:
                searchProduct(products, count);
                break;

            case 4:
                updateProduct(products, count);
                break;

            case 5:
                sortByPrice(products, count);
                printf("Products sorted by price successfully.\n");
                break;

            case 6:
                totalInventoryValue(products, count);
                break;

            case 7:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}

// Add Product
void addProducts(struct Product products[], int *count)
{
    if(*count >= MAX)
    {
        printf("Inventory is full.\n");
        return;
    }

    printf("Enter Product ID: ");
    scanf("%d", &products[*count].id);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", products[*count].name);

    printf("Enter Product Price: ");
    scanf("%f", &products[*count].price);

    printf("Enter Quantity: ");
    scanf("%d", &products[*count].quantity);

    (*count)++;

    printf("Product Added Successfully.\n");
}

// Display Products
void displayProducts(struct Product products[], int count)
{
    int i;

    if(count == 0)
    {
        printf("No Products Available.\n");
        return;
    }

    printf("\n--------------------------------------------------------------\n");
    printf("ID\tName\t\tPrice\t\tQuantity\n");
    printf("--------------------------------------------------------------\n");

    for(i = 0; i < count; i++)
    {
        printf("%d\t%-15s%.2f\t\t%d\n",
               products[i].id,
               products[i].name,
               products[i].price,
               products[i].quantity);
    }
}

// Search Product
void searchProduct(struct Product products[], int count)
{
    int id, i;

    printf("Enter Product ID: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(products[i].id == id)
        {
            printf("\nProduct Found\n");
            printf("ID       : %d\n", products[i].id);
            printf("Name     : %s\n", products[i].name);
            printf("Price    : %.2f\n", products[i].price);
            printf("Quantity : %d\n", products[i].quantity);
            return;
        }
    }

    printf("Product Not Found.\n");
}

// Update Product
void updateProduct(struct Product products[], int count)
{
    int id, i;

    printf("Enter Product ID to Update: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(products[i].id == id)
        {
            printf("Enter New Product Name: ");
            scanf(" %[^\n]", products[i].name);

            printf("Enter New Price: ");
            scanf("%f", &products[i].price);

            printf("Enter New Quantity: ");
            scanf("%d", &products[i].quantity);

            printf("Product Updated Successfully.\n");
            return;
        }
    }

    printf("Product Not Found.\n");
}

// Sort Products by Price
void sortByPrice(struct Product products[], int count)
{
    int i, j;
    struct Product temp;

    for(i = 0; i < count - 1; i++)
    {
        for(j = 0; j < count - i - 1; j++)
        {
            if(products[j].price > products[j + 1].price)
            {
                temp = products[j];
                products[j] = products[j + 1];
                products[j + 1] = temp;
            }
        }
    }
}

// Calculate Total Inventory Value
void totalInventoryValue(struct Product products[], int count)
{
    int i;
    float total = 0;

    for(i = 0; i < count; i++)
    {
        total += products[i].price * products[i].quantity;
    }

    printf("\nTotal Inventory Value = %.2f\n", total);
}