#include <stdio.h>

struct Student
{
    char name[20];
    int rollno;
    int age;
    int marks[5];
    int total;
    float average;
};

int main()
{
    struct Student s[100], *stuPtr;
    int n, i, j, topper = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        stuPtr = &s[i];

        printf("\nEnter details of Student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", stuPtr->name);

        printf("Roll Number: ");
        scanf("%d", &stuPtr->rollno);

        printf("Age: ");
        scanf("%d", &stuPtr->age);

        stuPtr->total = 0;

        printf("Enter marks of 5 subjects:\n");

        for(j = 0; j < 5; j++)
        {
            scanf("%d", &stuPtr->marks[j]);
            stuPtr->total += stuPtr->marks[j];
        }

        stuPtr->average = stuPtr->total / 5.0;

        if(stuPtr->total > s[topper].total)
        {
            topper = i;
        }
    }

    printf("\nStudent Details\n");

    for(i = 0; i < n; i++)
    {
        stuPtr = &s[i];

        printf("\nName    : %s\n", stuPtr->name);
        printf("Roll No : %d\n", stuPtr->rollno);
        printf("Age     : %d\n", stuPtr->age);
        printf("Total   : %d\n", stuPtr->total);
        printf("Average : %.2f\n", stuPtr->average);
    }

    printf("\nTopper Details\n");
    printf("Name    : %s\n", s[topper].name);
    printf("Roll No : %d\n", s[topper].rollno);
    printf("Total   : %d\n", s[topper].total);
    printf("Average : %.2f\n", s[topper].average);
    return 0;
}
