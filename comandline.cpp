#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check if at least student name and one mark are provided
    if (argc < 3) {
        // Print usage instructions
        fprintf(stderr, "Usage: %s <StudentName> <mark1> [mark2 ...]\n", argv[0]);
        return 1;
    }

    // Read student name from argv[1]
    char *name = argv[1];
    printf("Name: %s\n", name);

    float total = 0.0f;

    // Loop through each mark argument
    for (int i = 2; i < argc; i++) {
        char *arg = argv[i];
        char *endptr;
        // Convert string to float with error checking
        float mark = strtof(arg, &endptr);

        // Check for conversion errors (no digits found or extra chars)
        if (endptr == arg || *endptr != '\0') {
            fprintf(stderr, "Invalid numeric input: '%s'\n", arg);
            return 1;
        }

        // Print the valid mark and add to total
        printf("Mark %d: %.2f\n", i-1, mark);
        total += mark;
    }

    // Print the total marks
    printf("Total Marks: %.2f\n", total);
    return 0;
}
