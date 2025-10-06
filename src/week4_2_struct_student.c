/*
 * week4_2_struct_student.c
 * Author: Farid Ismayilzada
 * Student ID: 241ADB075
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Students should define a 'Student' struct with fields like name, id, and grade.
 *   Then create a few instances and print them.
 */

#include <stdio.h>
#include <string.h>

// TODO: Define struct Student with fields: name (char[]), id (int), grade (float)

// Example:
struct Student {
    char name[50];
    int id;
    float grade;
};

int main(void) {
    // TODO: Declare one or more Student variables
    struct Student student1, student2;

    // TODO: Assign values (either manually or via scanf)
    strcpy(student1.name, "Jauns");
    student1.id = 521;
    student1.grade = 57;

    strcpy(student2.name, "Imants");
    student2.id = 522;
    student2.grade = 63.5;


    // TODO: Print struct contents using printf
    printf("Student 1: %s, ID: %d, Grade: %.2f\n", student1.name, student1.id, student1.grade);
    printf("Student 2: %s, ID: %d, Grade: %.2f\n", student2.name, student2.id, student2.grade);

    return 0;
}
