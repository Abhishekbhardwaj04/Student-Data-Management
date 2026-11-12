#include "header.h"

void delete_record(Student **head) {
    if (*head == NULL) {
        printf("No records found\n");
        return;
    }

    int roll;
    printf("Enter roll number to delete:");
    scanf("%d", &roll);

    Student *temp = *head;
    Student *prev = NULL;

    if (temp != NULL && temp->rollno == roll) {
        *head = temp->next;
        free(temp);
        printf("Record deleted successfully\n");
        return;
    }

    while (temp != NULL && temp->rollno != roll) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Record not found\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Record deleted successfully\n");
}