#include <stdio.h>
#include <string.h>
struct stu
{
    char name[15];
    int rollNo;
    float marks;
};

int main()
{
    int i, j, size;
    printf("Please enter the size of array : ");
    scanf("%d", &size);
    struct stu st1[size];
    fflush(stdin);
    printf("\n");
    for (i = 0; i < size; i++)
    {
        printf("Enter Name for Student_%d : ", i + 1);
        scanf("%[^'\n']s", &st1[i].name);
        // fgets(st1[i].name, sizeof(st1[i].name), stdin);
        printf("Enter Roll for Student_%d : ", i + 1);
        scanf("%d", &st1[i].rollNo);
        printf("Enter Marks for Student_%d : ", i + 1);
        scanf("%f", &st1[i].marks);
        printf("\n\n");
        fflush(stdin);
    }

    printf("\n\n*********Values after INPUT**********\n\n");

    // printf("%s", st1[1].name);
    for (i = 0; i < size; i++)
    {
        printf("\nName of Student%d : %s", i + 1, st1[i].name);
        printf("\nRoll of Student%d : %d", i + 1, st1[i].rollNo);
        printf("\nMarks of Student%d : %f", i + 1, st1[i].marks);
        printf("\n\n");
    }
    return 0;
}