#include "header.h"

void show_records(Student *head) {
    if (head == NULL) {
        printf("No student record available\n");
        return;
    }

    printf("\nRoll No\tName\tPercentage\n");
    printf("\n");
    Student *temp = head;
    while (temp != NULL) {
        printf("%d\t%s\t%.2f\n", temp->rollno, temp->name, temp->percentage);
        temp = temp->next;
    }
    printf("\n");
}