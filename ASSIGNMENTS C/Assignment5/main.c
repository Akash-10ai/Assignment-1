/*
==================================================
Assignment 05 : Dynamic Array Management
Language      : C
Concepts Used : Dynamic Memory Allocation,
                Pointers, Arrays
==================================================
*/

#include <stdio.h>
#include <stdlib.h>

// Function Prototypes
void inputMarks(int *marks, int n);
void displayMarks(int *marks, int n);
void statistics(int *marks, int n);

int main()
{
    int *marks;
    int n;
    int choice;

    printf("=====================================\n");
    printf("    DYNAMIC ARRAY MANAGEMENT\n");
    printf("=====================================\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Dynamic Memory Allocation
    marks = (int *)malloc(n * sizeof(int));

    if (marks == NULL)
    {
        printf("Memory Allocation Failed.\n");
        return 1;
    }

    inputMarks(marks, n);

    do
    {
        printf("\n========== MENU ==========\n");
        printf("1. Display Marks\n");
        printf("2. Show Statistics\n");
        printf("3. Exit\n");
        printf("==========================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displayMarks(marks, n);
                break;

            case 2:
                statistics(marks, n);
                break;

            case 3:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    // Free Allocated Memory
    free(marks);
    marks = NULL;

    printf("Memory Released Successfully.\n");

    return 0;
}

// Input Marks
void inputMarks(int *marks, int n)
{
    int i;

    printf("\nEnter Student Marks:\n");

    for(i = 0; i < n; i++)
    {
        do
        {
            printf("Student %d: ", i + 1);
            scanf("%d", (marks + i));

            if(*(marks + i) < 0 || *(marks + i) > 100)
            {
                printf("Marks should be between 0 and 100.\n");
            }

        } while(*(marks + i) < 0 || *(marks + i) > 100);
    }
}

// Display Marks
void displayMarks(int *marks, int n)
{
    int i;

    printf("\nStudent Marks:\n");

    for(i = 0; i < n; i++)
    {
        printf("Student %d : %d\n", i + 1, *(marks + i));
    }
}

// Statistics
void statistics(int *marks, int n)
{
    int i;
    int highest = *marks;
    int lowest = *marks;
    int total = 0;
    float average;

    for(i = 0; i < n; i++)
    {
        if(*(marks + i) > highest)
            highest = *(marks + i);

        if(*(marks + i) < lowest)
            lowest = *(marks + i);

        total += *(marks + i);
    }

    average = (float)total / n;

    printf("\n------ Statistics ------\n");
    printf("Highest Marks : %d\n", highest);
    printf("Lowest Marks  : %d\n", lowest);
    printf("Total Marks   : %d\n", total);
    printf("Average Marks : %.2f\n", average);
}