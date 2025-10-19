// week5_task1_file_io.c
// Task 1: Read and write data from text files
// Week 5 – Files & Modular Programming
// Farid Ismayilzada (241ADB0750)
// TODO: Fill in the missing parts marked below.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    char filename[100] = "data.txt";
    char line[256];
    int lineCount = 0;

    // TODO: 1. Open file for writing (mode = "w")
    fp = fopen(filename, "w");
    // TODO: 2. Check if file opened successfully
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    // TODO: 3. Write 2–3 lines of text to the file using fprintf()
    fprintf(fp, "Good day\n");
    fprintf(fp, "We-re going to write some code here\n");
    fprintf(fp, "Check this out!\n");
    // TODO: 4. Close the file
    fclose(fp);

    // TODO: 5. Open file again for reading (mode = "r")
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    // TODO: 6. Use fgets() in a loop to read and print each line to the console
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
        lineCount++;
    }
    // TODO: 7. Close the file
    fclose(fp);

    // BONUS: ask user for filename instead of using default "data.txt"
printf("\n(Optional) Enter a filename to count lines: ");
    if (scanf("%99s", filename) == 1) {
        fp = fopen(filename, "r");
        if (fp == NULL) {
            perror("Error opening user file");
            return 1;
        }

        int bonusLineCount = 0;
        while (fgets(line, sizeof(line), fp) != NULL) {
            bonusLineCount++;
        }
        printf("Lines read from %s: %d\n", filename, bonusLineCount);
        fclose(fp);
    }

    return 0;
}