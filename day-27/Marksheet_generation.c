// This program help to create the student marksheet generation system
#include<stdio.h>

struct student{
    int roll;
    int class;
    char name[100];

    float hindi;
    float english;
    float maths;
    float science;
    float computer;

    char grade;
    float total;
    float percentage;
};

int main(){

     struct student s[50];
        int choice=0,n=0,i,roll,found;
    do{
        
        printf("\n----- Student Marksheet Generation -----");
        printf("\n1.Add Student");
        printf("\n2.Display Students");
        printf("\n3.Search Student");
        printf("\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice){

            case 1:
            printf("--Add student record---\n");

            printf("Enter Roll no :");
            scanf("%d", &s[n].roll);

            printf("Enter name :");
            scanf("%s", &s[n].name);

            printf("Enter class :");
            scanf("%d", &s[n].class);

            printf("---Enter marks of student in each subject---\n ");

            
            printf("Hindi      : ");
            scanf("%f", &s[n].hindi);
            printf("English    : ");
            scanf("%f", &s[n].english);
            printf("Mathematics: ");
            scanf("%f", &s[n].maths);
            printf("Science    : ");
            scanf("%f", &s[n].science);
            printf("Computer   : ");
            scanf("%f", &s[n].computer);

            s[n].total=s[n].hindi+s[n].english+s[n].computer+s[n].maths+s[n].science;

            s[n].percentage=s[n].total/5;

            if(s[n].percentage>=90){
               s[n].grade='A';
            }
            else if(s[n].percentage>=70){
               s[n].grade='B';
            }
            else if(s[n].percentage>=50){
               s[n].grade='C';
            }
            else{
               s[n].grade='D';
            }

           printf("Student added Successfully!\n");
           n++;
           break;

           case 2:
           if(n==0){
            printf("No record found!\n");
           }

           else{
            printf("---------Student Marksheet---------\n");

            for(i=0 ; i<n ; i++){
                printf("Roll no:%d\t",s[i].roll);
                printf("Name:%s\t",s[i].name);
                printf("Class:%d\n",s[i].class);
                printf("---------marks---------\n");
                printf("Hindi      :%.2f\n",s[i].hindi);
                printf("English    :%.2f\n",s[i].english);
                printf("Mathematics:%.2f\n",s[i].maths);
                printf("Science    :%.2f\n",s[i].science);
                printf("Computer   :%.2f\n",s[i].computer);
                printf("-------------------------------\n");
                printf("Total      :%.2f\t",s[i].total);
                printf("Percentage:%.2f\t",s[i].percentage);
                printf("Grade:%c\n",s[i].grade);
            }
           }
           break;
        
           case 3:
           printf("Enter roll number to search:");
           scanf("%d", &roll);

           found=0;
           for(i=0; i<n; i++){
            if(s[i].roll==roll){
                printf("----Student marksheet----\n");

                printf("Roll no:%d\n",s[i].roll);
                printf("Name:%s\n",s[i].name);
                printf("Class:%d\n",s[i].class);
                printf("-------Student marks-------\n");
                printf("Hindi      :%.2f\n",s[i].hindi);
                printf("English    :%.2f\n",s[i].english);
                printf("Mathematics:%.2f\n",s[i].maths);
                printf("Science    :%.2f\n",s[i].science);
                printf("Computer   :%.2f\n",s[i].computer);
                printf("Total      :%.2f\n",s[i].total);
                printf("Percentage :%.2f\n",s[i].percentage);
                printf("Grade      :%c\n",s[i].grade);

                found=1;
                break;
            }
           }
           if(found==0){
            printf("Student not found!\n");
           }
           break;

           case 4:
           
           printf("THANK YOU!\n");
           break;

           default:
           printf("Invalid choice!\n");
        }
            
    }while(choice!=4);

    return 0;
}