// This program help to create a salary management system 
#include<stdio.h>
struct Employee{
    int id;
    char name[100];
    float salary;
    float bonus;
    float total;
};

int main(){
    struct Employee emp[100];
    int choice=0, n=0,i,id,found;
    
    do
    {
        printf("\n----- Salary Management System -----");

        printf("\n1.Add Employee");
        printf("\n2.Display Employees");
        printf("\n3.Search Employee");
        printf("\n4.Update Employee Salary");
        printf("\n5.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Enter Employee ID: ");
            scanf("%d",&emp[n].id);

            printf("Enter Employee Name: ");
            scanf("%s",&emp[n].name);

            printf("Enter Employee Salary: ");
            scanf("%f",&emp[n].salary);

            printf("Enter Employee Bonus: ");
            scanf("%f",&emp[n].bonus);

            emp[n].total=emp[n].salary+emp[n].bonus;
            printf("total salary of employee is: %.2f\n",emp[n].total);

            n++;
            printf("Employee Added Successfully!\n");
            break;


            case 2:

            if(n==0){
                printf("No Records Found!\n");
            }

            else{
                printf("\nID\tName\tSalary\tBonus\tTotal\n");
                for(i=0;i<n;i++){
                    printf("%d\t%s\t%.2f\t%.2f\t%.2f\n",
                    emp[i].id,
                    emp[i].name,
                    emp[i].salary,
                    emp[i].bonus,
                    emp[i].total);
                }
            }
            break;


            case 3:
            printf("Enter Employee ID to Search: ");
            scanf("%d",&id);
            found=0;
            for(i=0 ; i<n ; i++){
                if(emp[i].id==id){
                    printf("\nEmployee Found");
                    printf("\nID: %d",emp[i].id);
                    printf("\nName: %s",emp[i].name);
                    printf("\nTotal Salary: %.2f\n",emp[i].total);
                    found=1;
                    break;
                }
            }
            if(found==0){
                printf("Employee not found!\n");
            }
            break;


            case 4:
            printf("Enter Employee ID to update salary: ");
            scanf("%d",&id);
            found=0;
            for(i=0 ; i<n ; i++){
                if(emp[i].id==id){
                    printf("Enter new salary: ");
                    scanf("%f",&emp[i].salary);
                    emp[i].total=emp[i].salary+emp[i].bonus;
                    printf("Salary updated successfully\n");
                    found=1;
                    break;
                }
            }
            if(found==0){
                printf("Employee not found!\n");
            }


            case 5:
            printf("Exiting the program.\n");
            break;

            default:
            printf("Invalid choice! Please try again.\n");

        }

    }while(choice!=5);

    return 0;
}