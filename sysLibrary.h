#include <stdio.h>

typedef struct {int ID, grade; char name[20];} stud;

typedef enum {add=1, list, exit}menu;

void addStd() {

    FILE *fptr;
    stud student;

    fptr = fopen("record.txt","a");

    if (fptr == NULL) {
        printf("File could not be opened!\n");
        return;
    }

    printf("\nEnter Student Info in the format:\nID NAME GRADE\n\n");
    scanf("%d %s %d",
        &student.ID, &student.name, &student.grade);
    
    fprintf(fptr, "%d %s %d\n",
        student.ID, student.name, student.grade);

    fclose(fptr);

    printf("\nSuccessfully Added!\n\n");
}

void listStd() {

    FILE *fptr;
    stud student;

    fptr = fopen("record.txt","r");

    if (fptr == NULL) {
        printf("\nNo records found.\n");
        return;
    }

    printf("\nStudent Records:\n\n");

    while (fscanf(fptr, "%d %s %d", &student.ID,
            &student.name, &student.grade) != EOF) {

        printf("|ID : %0.3d   |NAME : %s\t|GRADE : %3d|\n",
            student.ID, student.name, student.grade);

    }
    fclose(fptr);
}