#include <stdio.h>

// Define a structure
struct Person {
    char name[50];
    int age;
};

int main() {
    // Declare and initialize a structure variable
    struct Person person1 = {"Praveen", 19};

    // Declare another structure variable
    struct Person person2;

    // Copy person1 to person2
    person2 = person1;

    // Display contents of person2
    printf("Copied Person Details:\n");
    printf("Name: %s\n", person2.name);
    printf("Age: %d\n", person2.age);

    return 0;
}
