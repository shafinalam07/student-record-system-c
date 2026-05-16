#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int choice;

    while(1) {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Record\n");
        printf("2. View Last Saved Record\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            fp = fopen("student.txt", "w");
            if(fp == NULL) {
                printf("Error opening file!\n");
                exit(1);
            }
            printf("Enter Roll Number: ");
            scanf("%d", &s.roll);
            printf("Enter Name: ");
            scanf("%s", s.name);
            printf("Enter Marks: ");
            scanf("%f", &s.marks);

            fprintf(fp, "%d %s %f", s.roll, s.name, s.marks);
            fclose(fp);
            printf("Record saved successfully!\n");
        } 
        else if(choice == 2) {
            fp = fopen("student.txt", "r");
            if(fp == NULL) {
                printf("No record found! Add a record first.\n");
                continue;
            }
            fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks);
            printf("\nSaved Student Data:\n");
            printf("Roll: %d\nName: %s\nMarks: %.2f\n", s.roll, s.name, s.marks);
            fclose(fp);
        } 
        else if(choice == 3) {
            break;
        } 
        else {
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}