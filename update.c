#include "header.h"

void modify_record(Student *head) {
    if (head == NULL) {
        printf("No records available\n");
        return;
    }

    int roll;
    printf("Enter roll number to modify:");
    scanf("%d", &roll);

    Student *temp = head;
    while (temp != NULL && temp->rollno != roll) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Record not found\n");
        return;
    }

    printf("Enter new name:");
    scanf("%s", temp->name);

    printf("Enter new percentage:");
    scanf("%f", &temp->percentage);

    printf("Record update successfully\n");
}