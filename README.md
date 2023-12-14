Project Title: Employee Management System

Objective:
Create a functional Employee Management System in C using file handling for basic CRUD operations (Create, Read, Update, Delete).

Components:

Project description:

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


![Screenshot (159)](https://github.com/nikita11ch/EMPLOYEE-MANAGEMENT-SYSTEM/assets/115834443/7fa290fc-b0e3-458c-931f-ff3bf18d7b96)


![Screenshot (160)](https://github.com/nikita11ch/EMPLOYEE-MANAGEMENT-SYSTEM/assets/115834443/c5aa4e9d-75bc-4beb-89ab-1c0e12a19e73)


![Screenshot (161)](https://github.com/nikita11ch/EMPLOYEE-MANAGEMENT-SYSTEM/assets/115834443/bf6a3042-0e93-4e2e-9137-f86e5e841562)


