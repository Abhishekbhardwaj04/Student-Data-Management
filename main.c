#include "header.h"

void sort_records(Student **head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Student *i, *j;
    int temp_roll;
    char temp_name[50];
    float temp_pct;

    for (i = *head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->rollno > j->rollno) {
                temp_roll = i->rollno;
                i->rollno = j->rollno;
                j->rollno = temp_roll;

                strcpy(temp_name, i->name);
                strcpy(i->name, j->name);
                strcpy(j->name, temp_name);

                temp_pct = i->percentage;
                i->percentage = j->percentage;
                j->percentage = temp_pct;
            }
        }
    }
    printf("List sorted successfully.\n");
}

void delete_all_records(Student **head) {
    Student *temp;
    while (*head != NULL) {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
    printf("All records deleted from memory.\n");
}

void reverse_records(Student **head) {
    Student *prev = NULL, *current = *head, *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
    printf("List reversed successfully.\n");
}

int main() {
    Student *head = NULL;
    load_records(&head);
    char choice;

    while (1) {
        printf("\n STUDENT RECORD MENU \n");
        printf("A - Add new record\n");
        printf("D - Delete a record\n");
        printf("S - Show the list\n");
        printf("M - Modify a record\n");
        printf("V - Save records\n");
        printf("T - Sort the list\n");
        printf("R - Reverse the list\n");
        printf("L - Delete all records\n");
        printf("E - Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a': case 'A': add_record(&head); break;
            case 'd': case 'D': delete_record(&head); break;
            case 's': case 'S': show_records(head); break;
            case 'm': case 'M': modify_record(head); break;
            case 'v': case 'V': save_records(head); break;
            case 't': case 'T': sort_records(&head); break;
            case 'r': case 'R': reverse_records(&head); break;
            case 'l': case 'L': delete_all_records(&head); break;
            case 'e': case 'E':
                save_records(head);
                printf("Exiting\n");
                exit(0);
            default:
                printf("Invalid choice try again\n");
        }
    }
    return 0;
}