#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int rollno;
    char name[50];
    float percentage;
    struct student *next;
};

typedef struct student Student;

void add_record(Student **head);
void delete_record(Student **head);
void show_records(Student *head);
void modify_record(Student *head);
void save_records(Student *head);
void load_records(Student **head);
void sort_records(Student **head);
void delete_all_records(Student **head);
void reverse_records(Student **head);

#endif