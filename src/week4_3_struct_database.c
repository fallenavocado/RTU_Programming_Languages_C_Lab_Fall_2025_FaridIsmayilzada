/*
 * week4_3_struct_database.c
 * Author: Farid Ismayilzada
 * Student ID: 241ADB075
 * Description:
 *   Simple in-memory "database" using an array of structs.
 *   Students will use malloc to allocate space for multiple Student records,
 *   then input, display, and possibly search the data.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: Define struct Student with fields name, id, grade

struct Student {
    char name[50];
    int id;
    float grade;
};

int main(void) {
    int n;
    struct Student *students = NULL;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number.\n");
        return 1;
    }

    // TODO: Allocate memory for n Student structs using malloc

    students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // TODO: Read student data in a loop
      for (int i = 0; i < n; i++) {
        printf("Enter data for student %d (Name ID Grade): ", i + 1);
        if (scanf("%49s %d %f", students[i].name, &students[i].id, &students[i].grade) != 3) {
            printf("Invalid input.\n");
            free(students);
            return 1;
        }
    }
    // TODO: Display all student records in formatted output
    printf("\nStudent Records:\n");
    printf("\n%-6s %-20s %-7s\n", "ID", "Name", "Grade");
    printf("%-6s %-20s %-7s\n", "------", "--------------------", "-------");

    // Optional: Compute average grade or find top student
      double sum = 0.0;
    for (int i = 0; i < n; i++) {
        printf("%-6d %-20s %-7.1f\n",
               students[i].id, students[i].name, students[i].grade);
        sum += students[i].grade;
    }
    printf("\nAverage Grade: %.2f\n", (float)(sum / n));
    // TODO: Free allocated memory
    
    free(students);
    students = NULL;

    return 0;
}
