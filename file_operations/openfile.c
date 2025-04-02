#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("textfile.txt", "r"); // Open file in read mode
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) { // Read character by character
        putchar(ch);
    }

    fclose(file); // Close file
    return EXIT_SUCCESS;
}
