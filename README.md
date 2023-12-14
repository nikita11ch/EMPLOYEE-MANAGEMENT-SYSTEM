# EMPLOYEE-MANAGEMENT-SYSTEM

Here's a brief overview of the components used in the code:

Header Files:
#include<stdio.h>: Standard input-output functions.
#include<string.h>: String manipulation functions.

Function Declarations:
void newemp();: Function to add a new employee record.
void displayrecord();: Function to display all employee records.
void findrecord();: Function to find and display a specific employee record.
void modifyrecord();: Function to modify an existing employee record.
void deleterecord();: Function to delete an employee record.
void niki();: Function for a developer introduction.

Structure:
struct emp: Structure to store employee information (ID and Name).

Global Variables:
FILE *fp, *tp;: File pointers for the main and temporary files.
int id, flag=0, ch;: Global variables for employee ID, flag for status, and user's choice.

Main Function:
Displays a menu for different operations like adding, displaying, finding, modifying, deleting records, and exiting the program.
Uses a switch-case structure to handle user choices.

Developer Introduction Function:
void niki();: Displays a simple introduction message.

File Handling:
fp: Main file pointer for the employee records file ("pro.text").
tp: Temporary file pointer for modifying and deleting records.
fopen, fwrite, fread, fclose: File handling functions to open, write, read, and close files.

![Screenshot (159)](https://github.com/nikita11ch/EMPLOYEE-MANAGEMENT-SYSTEM/assets/115834443/7fa290fc-b0e3-458c-931f-ff3bf18d7b96)


![Screenshot (160)](https://github.com/nikita11ch/EMPLOYEE-MANAGEMENT-SYSTEM/assets/115834443/c5aa4e9d-75bc-4beb-89ab-1c0e12a19e73)


![Screenshot (161)](https://github.com/nikita11ch/EMPLOYEE-MANAGEMENT-SYSTEM/assets/115834443/bf6a3042-0e93-4e2e-9137-f86e5e841562)


