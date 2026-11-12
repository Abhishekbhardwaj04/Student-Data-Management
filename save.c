#include "header.h"

void save_records(Student *head) {
    FILE *fp = fopen("student.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file\n");
        return;
    }

    Student *temp = head;
    while (temp != NULL) {
        fwrite(temp, sizeof(Student), 1, fp);
        temp = temp->next;
    }

    fclose(fp);
    printf("Records saved\n");
}

void load_records(Student **head) {
    FILE *fp = fopen("student.dat", "rb");
    if (fp == NULL) return;

    Student *new_node;
    while (1) {
        new_node = (Student *)malloc(sizeof(Student));
        if (fread(new_node, sizeof(Student), 1, fp) != 1) {
            free(new_node);
            break;
        }
        new_node->next = NULL;

        if (*head == NULL) {
            *head = new_node;
        } else {
            Student *temp = *head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }
    fclose(fp);
}