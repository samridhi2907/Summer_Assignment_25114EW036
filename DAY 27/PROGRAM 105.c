#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

// To keep track of the number of students
int i = 0;

// A structure to store the student details
struct studentInfo
{
   char firstName[20];
   char lastName[20];
   int rollNumber;
   float CGPA;
   int courseId[10];
} st[500];

// Function to add student details
void addStudent()
{
   printf("Add the Student's Details\n\n");
   printf("Enter the first name of the student\n");
   scanf("%s", st[i].firstName);
   printf("Enter the last name of the student\n");
   scanf("%s", st[i].lastName);
   printf("Enter the roll number of the student\n");
   scanf("%d", &st[i].rollNumber);
   printf("Enter the CGPA of the student\n");
   scanf("%f", &st[i].CGPA);
   printf("Enter the course ID of each course of the student\n");
   for (int j = 0; j < 5; j++)
   {
      scanf("%d", &st[i].courseId[j]);
   }
   i = i + 1;
}

// Function to find the students using roll number
void findByRollNumber()
{
   int temp;
   printf("Enter the roll number of the student\n");
   scanf("%d", &temp);
   for (int j = 1; j <= i; j++)
   {
      if (temp == st[i].rollNumber)
      {
         printf("The student's details are\n");
         printf("The first name is %s\n", st[i].firstName);
         printf("The last name is %s\n", st[i].lastName);
         printf("The CGPA is %f\n", st[i].CGPA);
         for (int j = 0; j < 5; j++)
         {
            printf("The enrolled course Ids are %d\n", st[i].courseId[j]);
         }
      }
   }
}
