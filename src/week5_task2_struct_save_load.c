// week5_task2_struct_save_load.c
// Task 2: Save and load structured records from a file
// Week 5 – Files & Modular Programming
// Farid Ismayilzada (241ADB0750)
// TODO: Complete function implementations and file handling logic.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50

typedef struct {
    char name[MAX_NAME_LEN];
    int age;
    float gpa;
} Student;

// Function prototypes
void save_student(Student s, const char *filename);
Student load_student(const char *filename);

int main(void) {
    Student s1;
    strcpy(s1.name, "Alice");
    s1.age = 21;
    s1.gpa = 3.75f;

    const char *filename = "student.txt";

    // TODO: Call save_student() to save student data to file
    printf("Saving student to file...\n");
    save_student(s1, filename);
    // TODO: Call load_student() to read data back into a new struct
    Student s2 = load_student(filename);
    // TODO: Print loaded data to confirm correctness
    printf("Loaded student:\n");
    printf("Name: %s\n", s2.name);
    printf("Age: %d\n", s2.age);
    printf("GPA: %.2f\n", s2.gpa);

    return 0;
}

// TODO: Implement save_student()

// Open file for writing, check errors, write fields, then close file
void save_student(Student s, const char *filename) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Couldņ't open file for writing");
        return;
    }
    fprintf(fp, "%s\n", s.name);
    fprintf(fp, "%d\n", s.age);
    fprintf(fp, "%.2f\n", s.gpa);
    fclose(fp);
}

// TODO: Implement load_student()
// Open file for reading, check errors, read fields, then close file
Student load_student(const char *filename) {
    Student s;
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Couldm't open file for reading");
        return s;
    }
    fgets(s.name, sizeof(s.name), fp);
    fscanf(fp, "%d\n", &s.age);
    fscanf(fp, "%f\n", &s.gpa);
    fclose(fp);
    return s;
}
