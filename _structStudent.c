#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // For qsort

struct Student {
    char name[50];
    int rollno;
    float m1, m2, m3, avg;
};

// Function to compute the average marks of a student
void computeAverage(struct Student *s) {
    s->avg = (s->m1 + s->m2 + s->m3) / 3;
}

// Comparator function to be used with qsort
int compareStudents(const void *a, const void *b) {
    struct Student *studentA = (struct Student *)a;
    struct Student *studentB = (struct Student *)b;
    
    // Compare by average marks
    if (studentA->avg < studentB->avg) return -1;
    if (studentA->avg > studentB->avg) return 1;
    return 0;  // If averages are equal, return 0
}

int main() {
    struct Student students[3];

    // Input student details
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

    // Sort students by average marks using qsort
    qsort(students, 3, sizeof(struct Student), compareStudents);

    // Display sorted students
    printf("\nStudents in ascending order of average marks:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Roll No: %d, Average Marks: %.2f\n", 
               students[i].name, students[i].rollno, students[i].avg);
    }

    return 0;
}
