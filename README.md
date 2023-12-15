PROJECT TITLE : EMPLOYEE MANAGEMENT SYSTEM

What is an Employee Management System?
Employee Management System is a distributed application, developed to maintain the details of employees working in any organization.
It maintains the information about the personal and official details of the employees.

OBJECTIVE OF PROJECT:
The objective of this project is to provide a comprehensive approach towards the management of employee information.

FEATURES :
Easily Add, Delete, Modify Records.

PROJECT DESCRIPTION :
Header Files:
#include<stdio.h>
#include<string.h>

Functions:
void newemp();
void displayrecord();
void findrecord();
void modifyrecord();
void deleterecord();
void niki();

Structure:
struct emp

Global Variables:
FILE *fp, *tp;
int id, flag=0, ch;

Main Function:
Interactive menu for operations (add, display, find, modify, delete, exit).

Developer Introduction Function:
void niki();

File Handling:
fp: Main file pointer for employee records ("pro.text").
tp: Temporary file pointer.
File operations: fopen, fwrite, fread, fclose.

PROJECT OUTPUT SCREENSHOT :


![Screenshot (159)](https://github.com/nikita11ch/EMPLOYEE-MANAGEMENT-SYSTEM/assets/115834443/7fa290fc-b0e3-458c-931f-ff3bf18d7b96)


![Screenshot (160)](https://github.com/nikita11ch/EMPLOYEE-MANAGEMENT-SYSTEM/assets/115834443/c5aa4e9d-75bc-4beb-89ab-1c0e12a19e73)


![Screenshot (161)](https://github.com/nikita11ch/EMPLOYEE-MANAGEMENT-SYSTEM/assets/115834443/bf6a3042-0e93-4e2e-9137-f86e5e841562)


