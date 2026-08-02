#include <stdio.h>

struct Student
{
    char name[50];
    int rollNo;
    int age;
    int marks[5];
    int total;
    float average;
};

int main()
{
    int n, i, j, topper = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input details
    for(i = 0; i < n; i++)
    {
        s[i].total = 0;

        printf("\nEnter details of Student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].rollNo);

        printf("Age: ");
        scanf("%d", &s[i].age);

        printf("Enter marks of 5 subjects:\n");
        for(j = 0; j < 5; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].average = s[i].total / 5.0;

        if(s[i].total > s[topper].total)
        {
            topper = i;
        }
    }

    // Display all students
    printf("\n----- Student Details -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nName      : %s", s[i].name);
        printf("\nRoll No   : %d", s[i].rollNo);
        printf("\nAge       : %d", s[i].age);
        printf("\nMarks     : ");

        for(j = 0; j < 5; j++)
        {
            printf("%d ", s[i].marks[j]);
        }

        printf("\nTotal     : %d", s[i].total);
        printf("\nAverage   : %.2f\n", s[i].average);
    }

    // Display topper
    printf("\n===== TOPPER =====\n");
    printf("Name    : %s\n", s[topper].name);
    printf("Roll No : %d\n", s[topper].rollNo);
    printf("Total   : %d\n", s[topper].total);
    printf("Average : %.2f\n", s[topper].average);

    return 0;
}