#include "header.h"
void add_record(Student **head) {
    Student *new_node = (Student *)malloc(sizeof(Student));
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    int r = 1;
    Student *temp;
    while (1) {
        int found = 0;
        temp = *head;
        while (temp != NULL) {
            if (temp->rollno == r) {
                found = 1;
                break;
            }
            temp = temp->next;
        }
        if (!found) break;
        r++;
    }

    new_node->rollno = r;
    printf("Assigned roll no: %d\n", new_node->rollno);

    printf("Enter name:");
    scanf("%s", new_node->name);

    printf("Enter percentage:");
    scanf("%f", &new_node->percentage);

    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
    } else {
        temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    printf("Record added successfully\n");
}