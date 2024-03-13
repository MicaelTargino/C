#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    char name[255];
    int age;
    float gpa;
};

void showStudents(struct Student* students) {
    for (int i = 0; i < 3; i++) {
        printf("Student: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("GPA: %.2f\n", students[i].gpa);
        printf("---------------\n");
    } 
}

int compareStudent(const void *s1, const void *s2) {
    const struct Student *student1 = s1;
    const struct Student *student2 = s2;

    if(student1->gpa < student2->gpa) return -1;
    if (student1->gpa > student2->gpa) return 1;
    
    return 0;
}

int main() {
    struct Student s2 = {"Eline Jansen", 18, 9.5};
    struct Student s3 = {"Arthur Jansen Targino", 2, 10};
    struct Student s1 = {"Micael Targino", 18, 7.5};

    struct Student students[3] = {s2, s3, s1};

    qsort(students, 3, sizeof(struct Student), compareStudent);

    showStudents(students);

    return 0;
}