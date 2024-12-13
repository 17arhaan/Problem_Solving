#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollno;
    float m1, m2, m3, avg;
};

void computeAverage(struct Student *s) {
    s->avg = (s->m1 + s->m2 + s->m3) / 3;
}

void sortStudents(struct Student students[], int size) {
    struct Student temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (students[i].avg > students[j].avg) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() { 
    struct Student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollno);
        printf("Marks in 3 subjects: ");
        scanf("%f %f %f", &students[i].m1, &students[i].m2, &students[i].m3);
        computeAverage(&students[i]);
    }

    sortStudents(students, 3);

    printf("\nStudents in ascending order of average marks:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Roll No: %d, Average Marks: %.2f\n", 
               students[i].name, students[i].rollno, students[i].avg);
    }

    return 0;
}
