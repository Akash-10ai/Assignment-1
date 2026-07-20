/*
===========================================
Assignment 02 : String Utility Toolkit
Language      : C
Concepts Used : Strings, Arrays, Loops,
                Functions
===========================================
*/

#include <stdio.h>
#include <string.h>

#define MAX 200

// Function Prototypes
void stringLength(char str[]);
void reverseString(char str[]);
void palindrome(char str[]);
void countCharacters(char str[]);
void characterFrequency(char str[]);

int main()
{
    char str[MAX];
    int choice;

    printf("=====================================\n");
    printf("      STRING UTILITY TOOLKIT\n");
    printf("=====================================\n");

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    do
    {
        printf("\n========== MENU ==========\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Check Palindrome\n");
        printf("4. Count Vowels, Digits and Spaces\n");
        printf("5. Character Frequency\n");
        printf("6. Exit\n");
        printf("==========================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                stringLength(str);
                break;

            case 2:
                reverseString(str);
                break;

            case 3:
                palindrome(str);
                break;

            case 4:
                countCharacters(str);
                break;

            case 5:
                characterFrequency(str);
                break;

            case 6:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}

// Find Length
void stringLength(char str[])
{
    printf("Length of string = %lu\n", strlen(str));
}

// Reverse String
void reverseString(char str[])
{
    char rev[MAX];
    int len = strlen(str);
    int i, j = 0;

    for(i = len - 1; i >= 0; i--)
    {
        rev[j++] = str[i];
    }

    rev[j] = '\0';

    printf("Reversed String = %s\n", rev);
}

// Check Palindrome
void palindrome(char str[])
{
    int start = 0;
    int end = strlen(str) - 1;
    int flag = 1;

    while(start < end)
    {
        if(str[start] != str[end])
        {
            flag = 0;
            break;
        }

        start++;
        end--;
    }

    if(flag)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is NOT a Palindrome.\n");
}

// Count Vowels, Digits and Spaces
void countCharacters(char str[])
{
    int vowels = 0;
    int digits = 0;
    int spaces = 0;
    int i;
    char ch;

    for(i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            vowels++;
        }
        else if(ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else if(ch == ' ')
        {
            spaces++;
        }
    }

    printf("Vowels : %d\n", vowels);
    printf("Digits : %d\n", digits);
    printf("Spaces : %d\n", spaces);
}

// Character Frequency
void characterFrequency(char str[])
{
    int frequency[256] = {0};
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        frequency[(unsigned char)str[i]]++;
    }

    printf("\nCharacter Frequency:\n");

    for(i = 0; i < 256; i++)
    {
        if(frequency[i] != 0)
        {
            printf("%c : %d\n", i, frequency[i]);
        }
    }
}