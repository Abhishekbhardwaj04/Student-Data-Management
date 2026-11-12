# Student-Data-Management

This is C programing language using mini-project to handle student data where add, delete, update and save there data. 
Files
- main.c: Main
- header.h: Function declaration
- add.c: Add new student record
- delete.c: Delete record any student
- record.c: here search and watch student record
- update.c: Update any student data
- save.c: save the student data

# How to Run
1. Compile the code:
 gcc main.c add.c delete.c record.c update.c save.c -o student

.\student.exe

#Output
------------
# Add new Record
STUDENT RECORD MENU 
A - Add new record
D - Delete a record
S - Show the list
M - Modify a record
V - Save records
T - Sort the list
R - Reverse the list
L - Delete all records
E - Exit
Enter your choice: A   
Assigned roll no: 1
Enter name:Abhishek

-----------------------------------------------------------------
# Show the list

 STUDENT RECORD MENU 
A - Add new record
D - Delete a record
S - Show the list
M - Modify a record
V - Save records
T - Sort the list
R - Reverse the list
L - Delete all records
E - Exit
Enter your choice: S

Roll No Name    Percentage

1       Abhishek        82.00
2       Aditya  85.00
3       yak     90.00
----------------------------------------------
# Modify The record
Enter your choice: M
Enter roll number to modify:3
Enter new name:Vinayak
Enter new percentage:95
Record update successfully

-----------------------------------------------
# Again show the record
Enter your choice: S

Roll No Name    Percentage

1       Abhishek        82.00
2       Aditya  85.00
3       Vinayak 95.00

--------------------------------------------------
# Delete the record

Enter your choice: D
Enter roll number to delete:2
Record deleted successfully

--------------------------------------------------
# Show the record
Enter your choice: s

Roll No Name    Percentage

1       Abhishek        82.00
3       Vinayak 95.00

Enter percentage:82
Record added successfully
