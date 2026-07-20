/*
=========================================================
Assignment 10 : LeetCode Array Challenge
Language      : C
Concepts Used : Arrays, Searching,
                Sorting, Algorithm Analysis
=========================================================
*/

#include <stdio.h>

#define MAX 100

// Function Prototypes
void displayArray(int arr[], int n);
void largestSecondLargest(int arr[], int n);
void smallestSecondSmallest(int arr[], int n);
void reverseArray(int arr[], int n);
void removeDuplicates(int arr[], int *n);
void frequency(int arr[], int n);
void linearSearch(int arr[], int n);
void bubbleSort(int arr[], int n);

int main()
{
    int arr[MAX];
    int n;
    int choice;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n========== ARRAY CHALLENGE ==========\n");
        printf("1. Display Array\n");
        printf("2. Largest & Second Largest\n");
        printf("3. Smallest & Second Smallest\n");
        printf("4. Reverse Array\n");
        printf("5. Remove Duplicates\n");
        printf("6. Count Frequency\n");
        printf("7. Search Element\n");
        printf("8. Sort Array\n");
        printf("9. Exit\n");
        printf("=====================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displayArray(arr, n);
                break;

            case 2:
                largestSecondLargest(arr, n);
                break;

            case 3:
                smallestSecondSmallest(arr, n);
                break;

            case 4:
                reverseArray(arr, n);
                printf("Array Reversed Successfully.\n");
                break;

            case 5:
                removeDuplicates(arr, &n);
                printf("Duplicate Elements Removed.\n");
                break;

            case 6:
                frequency(arr, n);
                break;

            case 7:
                linearSearch(arr, n);
                break;

            case 8:
                bubbleSort(arr, n);
                printf("Array Sorted Successfully.\n");
                break;

            case 9:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 9);

    return 0;
}

// Display Array
void displayArray(int arr[], int n)
{
    int i;

    printf("Array: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

// Largest and Second Largest
void largestSecondLargest(int arr[], int n)
{
    int largest = arr[0];
    int secondLargest = arr[0];
    int i;

    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    printf("Largest = %d\n", largest);
    printf("Second Largest = %d\n", secondLargest);
}

// Smallest and Second Smallest
void smallestSecondSmallest(int arr[], int n)
{
    int smallest = arr[0];
    int secondSmallest = arr[0];
    int i;

    for(i = 1; i < n; i++)
    {
        if(arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }

    printf("Smallest = %d\n", smallest);
    printf("Second Smallest = %d\n", secondSmallest);
}

// Reverse Array
void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int temp;

    while(start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

// Remove Duplicates
void removeDuplicates(int arr[], int *n)
{
    int i, j, k;

    for(i = 0; i < *n; i++)
    {
        for(j = i + 1; j < *n;)
        {
            if(arr[i] == arr[j])
            {
                for(k = j; k < *n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                (*n)--;
            }
            else
            {
                j++;
            }
        }
    }
}

// Frequency of Elements
void frequency(int arr[], int n)
{
    int visited[MAX] = {0};
    int i, j, count;

    printf("\nElement\tFrequency\n");

    for(i = 0; i < n; i++)
    {
        if(visited[i] == 1)
            continue;

        count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d\t%d\n", arr[i], count);
    }
}

// Linear Search
void linearSearch(int arr[], int n)
{
    int key, i;

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            return;
        }
    }

    printf("Element not found.\n");
}

// Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
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