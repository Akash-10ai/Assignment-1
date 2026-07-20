/*
=========================================================
Assignment 07 : Hospital Patient Management System
Language      : C
Concepts Used : Structures, Arrays,
                Strings, Functions
=========================================================
*/

#include <stdio.h>

#define MAX 100

// Structure Definition
struct Patient
{
    int patientID;
    char name[50];
    int age;
    char gender[10];
    char disease[50];
};

// Function Prototypes
void addPatient(struct Patient patients[], int *count);
void displayPatients(struct Patient patients[], int count);
void searchPatient(struct Patient patients[], int count);
void updatePatient(struct Patient patients[], int count);
void deletePatient(struct Patient patients[], int *count);

int main()
{
    struct Patient patients[MAX];
    int count = 0;
    int choice;

    do
    {
        printf("\n========== HOSPITAL PATIENT MANAGEMENT ==========\n");
        printf("1. Register Patient\n");
        printf("2. Display Patients\n");
        printf("3. Search Patient\n");
        printf("4. Update Patient\n");
        printf("5. Delete Patient\n");
        printf("6. Exit\n");
        printf("================================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addPatient(patients, &count);
                break;

            case 2:
                displayPatients(patients, count);
                break;

            case 3:
                searchPatient(patients, count);
                break;

            case 4:
                updatePatient(patients, count);
                break;

            case 5:
                deletePatient(patients, &count);
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

// Register Patient
void addPatient(struct Patient patients[], int *count)
{
    if(*count >= MAX)
    {
        printf("Patient record is full.\n");
        return;
    }

    printf("Enter Patient ID: ");
    scanf("%d", &patients[*count].patientID);

    printf("Enter Patient Name: ");
    scanf(" %[^\n]", patients[*count].name);

    printf("Enter Age: ");
    scanf("%d", &patients[*count].age);

    printf("Enter Gender: ");
    scanf("%s", patients[*count].gender);

    printf("Enter Disease: ");
    scanf(" %[^\n]", patients[*count].disease);

    (*count)++;

    printf("Patient Registered Successfully.\n");
}

// Display Patients
void displayPatients(struct Patient patients[], int count)
{
    int i;

    if(count == 0)
    {
        printf("No Patient Records Found.\n");
        return;
    }

    printf("\n--------------------------------------------------------------------------\n");
    printf("ID\tName\t\tAge\tGender\tDisease\n");
    printf("--------------------------------------------------------------------------\n");

    for(i = 0; i < count; i++)
    {
        printf("%d\t%-15s%d\t%-8s%s\n",
               patients[i].patientID,
               patients[i].name,
               patients[i].age,
               patients[i].gender,
               patients[i].disease);
    }
}

// Search Patient
void searchPatient(struct Patient patients[], int count)
{
    int id, i;

    printf("Enter Patient ID: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(patients[i].patientID == id)
        {
            printf("\nPatient Found\n");
            printf("Patient ID : %d\n", patients[i].patientID);
            printf("Name       : %s\n", patients[i].name);
            printf("Age        : %d\n", patients[i].age);
            printf("Gender     : %s\n", patients[i].gender);
            printf("Disease    : %s\n", patients[i].disease);
            return;
        }
    }

    printf("Patient Not Found.\n");
}

// Update Patient
void updatePatient(struct Patient patients[], int count)
{
    int id, i;

    printf("Enter Patient ID to Update: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(patients[i].patientID == id)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", patients[i].name);

            printf("Enter New Age: ");
            scanf("%d", &patients[i].age);

            printf("Enter New Gender: ");
            scanf("%s", patients[i].gender);

            printf("Enter New Disease: ");
            scanf(" %[^\n]", patients[i].disease);

            printf("Patient Record Updated Successfully.\n");
            return;
        }
    }

    printf("Patient Not Found.\n");
}

// Delete Patient
void deletePatient(struct Patient patients[], int *count)
{
    int id, i, j;

    printf("Enter Patient ID to Delete: ");
    scanf("%d", &id);

    for(i = 0; i < *count; i++)
    {
        if(patients[i].patientID == id)
        {
            for(j = i; j < *count - 1; j++)
            {
                patients[j] = patients[j + 1];
            }

            (*count)--;

            printf("Patient Record Deleted Successfully.\n");
            return;
        }
    }

    printf("Patient Not Found.\n");
}