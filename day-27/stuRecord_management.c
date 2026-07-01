// This program help to create the student record management system
#include <stdio.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct Student s[10];
    int choice, n = 0, i, roll, found;

    do
    {
        printf("\n----- Student Record Management -----");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[n].roll);

                printf("Enter Name: ");
                scanf("%s",&s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Student Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Records Found!\n");
                }
                else
                {
                    printf("\nRoll\tName\tMarks\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t%.2f\n",
                               s[i].roll,
                               s[i].name,
                               s[i].marks);
                    }
                }
                break;

            case 3:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(s[i].roll == roll)
                    {
                        printf("\nStudent Found");
                        printf("\nRoll : %d", s[i].roll);
                        printf("\nName : %s", s[i].name);
                        printf("\nMarks: %.2f\n", s[i].marks);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Student Not Found!\n");
                }
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}