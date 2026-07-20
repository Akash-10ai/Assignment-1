/*
====================================================
Assignment 01 : Student Marks Analyzer
Language      : C
Concepts Used : Arrays, Loops, Functions,
                Searching, Sorting
====================================================
*/

#include <stdio.h>

#define MAX 100

// Function Prototypes
void inputMarks(int marks[], int n);
void displayMarks(int marks[], int n);
void highestMark(int marks[], int n);
void lowestMark(int marks[], int n);
void totalAverage(int marks[], int n);
void searchMark(int marks[], int n);
void sortMarks(int marks[], int n);

int main()
{
    int marks[MAX];
    int n;
    int choice;

    printf("=====================================\n");
    printf("      STUDENT MARKS ANALYZER\n");
    printf("=====================================\n");

    // Input number of students
    do
    {
        printf("Enter number of students (1-100): ");
        scanf("%d", &n);

        if (n < 1 || n > MAX)
        {
            printf("Invalid input! Try again.\n");
        }

    } while (n < 1 || n > MAX);

    inputMarks(marks, n);

    do
    {
        printf("\n========== MENU ==========\n");
        printf("1. Display Marks\n");
        printf("2. Highest Mark\n");
        printf("3. Lowest Mark\n");
        printf("4. Total & Average\n");
        printf("5. Search Mark\n");
        printf("6. Sort Marks (Ascending)\n");
        printf("7. Exit\n");
        printf("==========================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displayMarks(marks, n);
                break;

            case 2:
                highestMark(marks, n);
                break;

            case 3:
                lowestMark(marks, n);
                break;

            case 4:
                totalAverage(marks, n);
                break;

            case 5:
                searchMark(marks, n);
                break;

            case 6:
                sortMarks(marks, n);
                printf("Marks sorted successfully.\n");
                break;

            case 7:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 7);

    return 0;
}

// Input Marks
void inputMarks(int marks[], int n)
{
    int i;

    printf("\nEnter Student Marks:\n");

    for(i = 0; i < n; i++)
    {
        do
        {
            printf("Student %d: ", i + 1);
            scanf("%d", &marks[i]);

            if(marks[i] < 0 || marks[i] > 100)
            {
                printf("Marks must be between 0 and 100.\n");
            }

        } while(marks[i] < 0 || marks[i] > 100);
    }
}

// Display Marks
void displayMarks(int marks[], int n)
{
    int i;

    printf("\nStudent Marks:\n");

    for(i = 0; i < n; i++)
    {
        printf("Student %d : %d\n", i + 1, marks[i]);
    }
}

// Highest Mark
void highestMark(int marks[], int n)
{
    int highest = marks[0];
    int i;

    for(i = 1; i < n; i++)
    {
        if(marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    printf("Highest Mark = %d\n", highest);
}

// Lowest Mark
void lowestMark(int marks[], int n)
{
    int lowest = marks[0];
    int i;

    for(i = 1; i < n; i++)
    {
        if(marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    printf("Lowest Mark = %d\n", lowest);
}

// Total and Average
void totalAverage(int marks[], int n)
{
    int total = 0;
    float average;
    int i;

    for(i = 0; i < n; i++)
    {
        total += marks[i];
    }

    average = (float)total / n;

    printf("Total Marks = %d\n", total);
    printf("Average = %.2f\n", average);
}

// Search Mark
void searchMark(int marks[], int n)
{
    int key;
    int i;
    int found = 0;

    printf("Enter mark to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(marks[i] == key)
        {
            printf("Found at Student %d\n", i + 1);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("Mark not found.\n");
    }
}

// Sort Marks
void sortMarks(int marks[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(marks[j] > marks[j + 1])
            {
                temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }
}