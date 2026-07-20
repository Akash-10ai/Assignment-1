/*
===========================================
Assignment 03 : Pointer Playground
Language      : C
Concepts Used : Pointers, Arrays,
                Pointer Arithmetic
===========================================
*/

#include <stdio.h>

#define MAX 100

// Function Prototypes
void displayAddress(int *ptr);
void swapNumbers(int *a, int *b);
void traverseArray(int arr[], int n);
void pointerArithmetic(int arr[], int n);

int main()
{
    int number;
    int num1, num2;
    int arr[MAX];
    int n;
    int choice;
    int i;

    do
    {
        printf("\n========== POINTER PLAYGROUND ==========\n");
        printf("1. Display Memory Address & Dereference\n");
        printf("2. Swap Two Numbers\n");
        printf("3. Traverse Array Using Pointer\n");
        printf("4. Pointer Arithmetic\n");
        printf("5. Exit\n");
        printf("========================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &number);

                displayAddress(&number);
                break;

            case 2:
                printf("Enter first number: ");
                scanf("%d", &num1);

                printf("Enter second number: ");
                scanf("%d", &num2);

                printf("\nBefore Swapping\n");
                printf("First Number = %d\n", num1);
                printf("Second Number = %d\n", num2);

                swapNumbers(&num1, &num2);

                printf("\nAfter Swapping\n");
                printf("First Number = %d\n", num1);
                printf("Second Number = %d\n", num2);
                break;

            case 3:
                printf("Enter number of elements: ");
                scanf("%d", &n);

                printf("Enter array elements:\n");

                for(i = 0; i < n; i++)
                {
                    scanf("%d", &arr[i]);
                }

                traverseArray(arr, n);
                break;

            case 4:
                printf("Enter number of elements: ");
                scanf("%d", &n);

                printf("Enter array elements:\n");

                for(i = 0; i < n; i++)
                {
                    scanf("%d", &arr[i]);
                }

                pointerArithmetic(arr, n);
                break;

            case 5:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}

// Display Address and Dereference
void displayAddress(int *ptr)
{
    printf("\nValue = %d\n", *ptr);
    printf("Memory Address = %p\n", (void *)ptr);
}

// Swap Numbers
void swapNumbers(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

// Traverse Array Using Pointer
void traverseArray(int arr[], int n)
{
    int *ptr = arr;
    int i;

    printf("\nArray Elements:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\n");
}

// Pointer Arithmetic
void pointerArithmetic(int arr[], int n)
{
    int *ptr = arr;
    int i;

    printf("\nPointer Arithmetic Demonstration\n");

    for(i = 0; i < n; i++)
    {
        printf("Address = %p\tValue = %d\n",
               (void *)(ptr + i),
               *(ptr + i));
    }
}