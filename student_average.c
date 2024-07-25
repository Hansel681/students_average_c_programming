#include <stdio.h>

int main() {
    int numStudents, i, j;
    float maths, english, French, Economics, total, average;
    float classTotals[100], classAverages[100];

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (i = 0; i < numStudents; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        printf("What mark did the student have in Maths: ");
        scanf("%f", &maths);
        printf("What mark did the student have in English: ");
        scanf("%f", &english);
        printf("What mark did the student have in French: ");
        scanf("%f", &French);
        printf("What mark did the student have in Economics: ");
        scanf("%f", &Economics);

        total = (maths * 5) + (english * 5) + (French * 3) + (Economics * 3);
        average = total / 16.0;

        classTotals[i] = total;
        classAverages[i] = average;
    }

    // Sorting the class averages in descending order
    for (i = 0; i < numStudents - 1; i++) {
        for (j = i + 1; j < numStudents; j++) {
            if (classAverages[i] < classAverages[j]) {
                float temp = classAverages[i];
                classAverages[i] = classAverages[j];
                classAverages[j] = temp;

                temp = classTotals[i];
                classTotals[i] = classTotals[j];
                classTotals[j] = temp;
            }
        }
    }

    printf("\nStudent Position\tAverage\n");
    for (i = 0; i < numStudents; i++) {
        printf("%d\t\t%.2f\n", i + 1, classAverages[i]);
    }

    return 0;
}

