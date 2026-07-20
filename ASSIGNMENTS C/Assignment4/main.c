/*
===================================================
Assignment 04 : Student Record Management System
Language      : C
Concepts Used : Structures, Arrays, Strings,
                Functions
===================================================
*/

#include <stdio.h>
#include <string.h>

#define MAX 100

// Structure Definition
struct Student
{
    int id;
    char name[50];
    int age;
    float marks;
};

// Function Prototypes
void addStudents(struct Student students[], int *count);
void displayStudents(struct Student students[], int count);
void searchStudent(struct Student students[], int count);
void updateStudent(struct Student students[], int count);
void deleteStudent(struct Student students[], int *count);

int main()
{
    struct Student students[MAX];
    int count = 0;
    int choice;

    do
    {
        printf("\n========== STUDENT RECORD MANAGEMENT ==========\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("===============================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudents(students, &count);
                break;

            case 2:
                displayStudents(students, count);
                break;

            case 3:
                searchStudent(students, count);
                break;

            case 4:
                updateStudent(students, count);
                break;

            case 5:
                deleteStudent(students, &count);
                break;

            case 6:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}

// Add Student
void addStudents(struct Student students[], int *count)
{
    if(*count >= MAX)
    {
        printf("Student list is full.\n");
        return;
    }

    printf("Enter Student ID: ");
    scanf("%d", &students[*count].id);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", students[*count].name);

    printf("Enter Age: ");
    scanf("%d", &students[*count].age);

    printf("Enter Marks: ");
    scanf("%f", &students[*count].marks);

    (*count)++;

    printf("Student Added Successfully.\n");
}

// Display Students
void displayStudents(struct Student students[], int count)
{
    int i;

    if(count == 0)
    {
        printf("No Records Found.\n");
        return;
    }

    printf("\n-----------------------------------------------------------\n");
    printf("ID\tName\t\tAge\tMarks\n");
    printf("-----------------------------------------------------------\n");

    for(i = 0; i < count; i++)
    {
        printf("%d\t%-15s%d\t%.2f\n",
               students[i].id,
               students[i].name,
               students[i].age,
               students[i].marks);
    }
}

// Search Student
void searchStudent(struct Student students[], int count)
{
    int id, i;

    printf("Enter Student ID: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(students[i].id == id)
        {
            printf("\nRecord Found\n");
            printf("ID    : %d\n", students[i].id);
            printf("Name  : %s\n", students[i].name);
            printf("Age   : %d\n", students[i].age);
            printf("Marks : %.2f\n", students[i].marks);
            return;
        }
    }

    printf("Student Not Found.\n");
}

// Update Student
void updateStudent(struct Student students[], int count)
{
    int id, i;

    printf("Enter Student ID to Update: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(students[i].id == id)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", students[i].name);

            printf("Enter New Age: ");
            scanf("%d", &students[i].age);

            printf("Enter New Marks: ");
            scanf("%f", &students[i].marks);

            printf("Record Updated Successfully.\n");
            return;
        }
    }

    printf("Student Not Found.\n");
}

// Delete Student
void deleteStudent(struct Student students[], int *count)
{
    int id, i, j;

    printf("Enter Student ID to Delete: ");
    scanf("%d", &id);

    for(i = 0; i < *count; i++)
    {
        if(students[i].id == id)
        {
            for(j = i; j < *count - 1; j++)
            {
                students[j] = students[j + 1];
            }

            (*count)--;

            printf("Record Deleted Successfully.\n");
            return;
        }
    }

    printf("Student Not Found.\n");
}