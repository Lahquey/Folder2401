#include <stdio.h>

int main() {
    // Declare variables
    char name1[20];  // Assuming names are strings with a maximum length of 19 characters
    char name2[20];
    int age1, age2;

    // Assign values to variables
    printf("Enter the first name: ");
    scanf("%19s", name1);  // Read a string with a maximum length of 19 characters

    printf("Enter the age of %s: ", name1);
    scanf("%d", &age1);  // Read an integer

    printf("Enter the second name: ");
    scanf("%19s", name2);  // Read a string with a maximum length of 19 characters

    printf("Enter the age of %s: ", name2);
    scanf("%d", &age2);  // Read an integer

    // Display the assigned values
    printf("\n%s is %d years old.\n", name1, age1);
    printf("%s is %d years old.\n", name2, age2);

    return 0;
}

