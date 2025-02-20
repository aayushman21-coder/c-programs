#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    int id;
    char name[50];
    int marks;
    char stdn[15];
    char stdr[15];
} project;

void createproject();
void addproject();
void viewproject();
void editproject();
void deleteproject();
FILE *fp;

int main() {
    int choice;
    while (1) {
        printf("\n1. Create Project\n2. Add project\n3. View project \n4. Edit Project\n5. Delete project\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
       
        switch (choice) {
            case 1: createproject(); break;
            case 2: addproject(); break;
            case 3: viewproject(); break;
            case 4: editproject(); break;
            case 5: deleteproject(); break;
            case 6: exit(0);
            default: printf("Invalid choice.\n");
        }
    }
    return 0;
}

void createproject() {
    char filename[50];
    printf("Enter project filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error creating project file.\n");
        return;
    }
    printf("Project file '%s' created successfully.\n", filename);
    fclose(fp);
}

void addproject() {
    project s;
    fp = fopen("project.txt", "a");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }
    printf("Enter project ID: ");
    scanf("%d", &s.id);
    printf("Enter project name: ");
    scanf("%s", s.name);
    printf("Enter project marks: ");
    scanf("%d", &s.marks);
    printf("Enter project head name: ");
    scanf("%s", s.stdn);
    printf("Enter respective roll number: ");
    scanf("%s", s.stdr);
   
    fprintf(fp, "%d %s %d %s %s\n", s.id, s.name, s.marks, s.stdn, s.stdr);
    fclose(fp);
}

void viewproject() {
    project s;
    fp = fopen("project.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }
    printf("Project Records:\n");
   
    while (fscanf(fp, "%d %s %d %s %s", &s.id, s.name, &s.marks, s.stdn, s.stdr) != EOF) {
        printf("\t\t\tPROJECT MANAGER\n");
        printf("ID: %d\n", s.id);
        printf("Name: %s\n", s.name);
        printf("\t\t\t\t\tMarks: %d\n", s.marks);
        printf("Project head: %s\n", s.stdn);
        printf("Roll: %s\n", s.stdr);
        printf("------------------------------------------------------------------------\n");
    }
    fclose(fp);
}

void editproject() {
    int editid;
    project s;
    FILE *temp;
    int found = 0;
    fp = fopen("project.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }
    temp = fopen("temp.txt", "w");
    if (temp == NULL) {
        printf("Error opening file.\n");
        fclose(fp);
        return;
    }
    printf("Enter project ID to edit: ");
    scanf("%d", &editid);
    while (fscanf(fp, "%d %s %d %s %s", &s.id, s.name, &s.marks, s.stdn, s.stdr) != EOF) {
        if (s.id == editid) {
            found = 1;
            printf("Editing Project ID: %d\n", s.id);
            printf("Enter new project ID: ");
            scanf("%d", &s.id);
            printf("Enter new name: ");
            scanf("%s", s.name);
            printf("Enter new marks: ");
            scanf("%d", &s.marks);
            printf("Enter project head name: ");
            scanf("%s", s.stdn);
            printf("Enter respective roll number: ");
            scanf("%s", s.stdr);
        }
        fprintf(temp, "%d %s %d %s %s\n", s.id, s.name, s.marks, s.stdn, s.stdr);
    }
    fclose(fp);
    fclose(temp);
    if (found) {
        remove("project.txt");
        rename("temp.txt", "project.txt");
        printf("Project updated successfully!\n");
    } else {
        remove("temp.txt");
        printf("Project ID not found!\n");
    }
}

void deleteproject() {
    int deleteid;
    project s;
    FILE *temp;
    int found = 0;
    fp = fopen("project.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }
    temp = fopen("project.txt", "w");
    if (temp == NULL) {
        printf("Error opening file.\n");
        fclose(fp);
        return;
    }
    printf("Enter project ID to delete: ");
    scanf("%d", &deleteid);
    while (fscanf(fp, "%d %s %d %s %s", &s.id, s.name, &s.marks, s.stdn, s.stdr) != EOF) {
        if (s.id != deleteid) {
            found = 1;
            fprintf(temp, "%d %s %d %s %s\n", s.id, s.name, s.marks, s.stdn, s.stdr);
        }
            if (found) {
        remove("project.txt");
        rename("temp.txt", "project.txt");
        printf("Project deleted successfully.\n");
    } else {
        remove("temp.txt");
        printf("Project ID not found!\n");
    }
    }
    fclose(fp);
    fclose(temp);

}
