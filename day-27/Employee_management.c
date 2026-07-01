// This program help to create the employee management system
#include<stdio.h>
struct employee{
    int Id;
    char Name[20];
    float Salary;
};

int main(){
    struct employee e[10];
    int choice,n=0,i,Id,found;

    do{
        printf("\n----Employee Management Systen----");
        printf("\n1.Add Employee");
        printf("\n2.Display employee");
        printf("\n3.Search employee");
        printf("\n4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter ID of employee:");
            scanf("%d",&e[n].Id);
            printf("Enter name of employee:");
            scanf("%s",&e[n].Name);
            printf("Enter salary of employee:");
            scanf("%f",&e[n].Salary);
            n++;
            printf("Employee added successfully\n");
            break;

            case 2:
        if(n==0){
            printf("No records found\n");           
        }     
          else{
            printf("\nEmployee Records:\n");
            printf("\nId\tName\tSalary\n");
            for(i=0;i<n;i++){
                printf("%d\t%s\t%.2f\n",
                    e[i].Id
                    ,e[i].Name
                    ,e[i].Salary);
            }
          }
          break;

            case 3:
            if(n==0){
                printf("No records found\n");
            }
            else{
                printf("Enter ID of employee to search:");
                scanf("%d",&Id);
                found=0;
                for(i=0;i<n;i++){
                    if(e[i].Id==Id){
                        printf("\nEmployee found:\n");
                        printf("Id: %d\nName: %s\nSalary: %.2f\n",e[i].Id,e[i].Name,e[i].Salary);
                        found=1;
                        break;
                    }
                }
                if(found==0){
                    printf("Employee not found\n");
                }
            }
            break;
        }
    }while(choice!=4);

    return 0;
}