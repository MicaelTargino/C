#include <stdio.h>
#include <string.h>

struct Student {
    char name[255];
    int age;
    float gpa;
};

int main() {
    struct Student student;
    char new_name[255];
    int new_age;
    float new_gpa;
    
    strcpy(student.name, "Micael Targino");
    student.age = 18;
    student.gpa = 7.5;
    
    printf("Student name: %s\n", student.name);
    printf("Student age: %d\n", student.age);
    printf("Student gpa: %.2f\n", student.gpa);

    printf("Enter a new student name: ");
    fgets(new_name, 255 * sizeof(char), stdin);

    printf("Enter a new student age: ");
    scanf("%d", &new_age);

    printf("Enter a new student GPA: ");
    scanf("%f", &new_gpa);

    strcpy(student.name, new_name);
    student.age = new_age;
    student.gpa = new_gpa;

    printf("Student name: %s\n", student.name);
    printf("Student age: %d\n", student.age);
    printf("Student gpa: %.2f\n", student.gpa);

    return 0;
}