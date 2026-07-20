/*
=========================================================
Assignment 09 : Dynamic Array Operations
Language      : C
Concepts Used : Dynamic Memory, Arrays,
                Searching, Sorting
=========================================================
*/

#include <stdio.h>
#include <stdlib.h>

// Function Prototypes
void display(int *arr, int size);
void insert(int *arr, int *size);
void deleteElement(int *arr, int *size);
void update(int *arr, int size);
void linearSearch(int *arr, int size);
void bubbleSort(int *arr, int size);
void binarySearch(int *arr, int size);

int main()
{
    int *arr;
    int size;
    int choice;

    printf("Enter initial size of array: ");
    scanf("%d", &size);

    arr = (int *)malloc(100 * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory Allocation Failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n========== DYNAMIC ARRAY ==========\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Update Element\n");
        printf("5. Linear Search\n");
        printf("6. Sort Array\n");
        printf("7. Binary Search\n");
        printf("8. Exit\n");
        printf("===================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                display(arr, size);
                break;

            case 2:
                insert(arr, &size);
                break;

            case 3:
                deleteElement(arr, &size);
                break;

            case 4:
                update(arr, size);
                break;

            case 5:
                linearSearch(arr, size);
                break;

            case 6:
                bubbleSort(arr, size);
                printf("Array Sorted Successfully.\n");
                break;

            case 7:
                binarySearch(arr, size);
                break;

            case 8:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 8);

    free(arr);

    return 0;
}

// Display Array
void display(int *arr, int size)
{
    printf("Array Elements: ");

    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

// Insert Element
void insert(int *arr, int *size)
{
    int position, value;

    printf("Enter Position (1-%d): ", *size + 1);
    scanf("%d", &position);

    printf("Enter Value: ");
    scanf("%d", &value);

    for(int i = *size; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = value;

    (*size)++;

    printf("Element Inserted Successfully.\n");
}

// Delete Element
void deleteElement(int *arr, int *size)
{
    int position;

    printf("Enter Position to Delete: ");
    scanf("%d", &position);

    for(int i = position - 1; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    (*size)--;

    printf("Element Deleted Successfully.\n");
}

// Update Element
void update(int *arr, int size)
{
    int position, value;

    printf("Enter Position: ");
    scanf("%d", &position);

    printf("Enter New Value: ");
    scanf("%d", &value);

    arr[position - 1] = value;

    printf("Element Updated Successfully.\n");
}

// Linear Search
void linearSearch(int *arr, int size)
{
    int key;

    printf("Enter Element to Search: ");
    scanf("%d", &key);

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            printf("Element Found at Position %d\n", i + 1);
            return;
        }
    }

    printf("Element Not Found.\n");
}

// Bubble Sort
void bubbleSort(int *arr, int size)
{
    int temp;

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Binary Search
void binarySearch(int *arr, int size)
{
    int key;
    int low = 0;
    int high = size - 1;
    int mid;

    printf("Enter Element to Search: ");
    scanf("%d", &key);

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            printf("Element Found at Position %d\n", mid + 1);
            return;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("Element Not Found.\n");
}