#include <stdio.h>
#include <stdlib.h>

int main ()
 {

 int grade;

 //Ask for and get grade
 printf("What grade are you in? ");
 scanf("%i", &grade);

 //Validate input
 if (grade < 1 || grade > 12)
 {
 printf("Try again buddy! Only grades 1-12 are valid\n");
 exit(1);
 }

 //Assign school based on grade level
 if (grade <= 5)
 {
 printf("You are in elementary school.\n");
 }
 else if (grade <= 8)
 {
 printf("You are in middle school.\n");
 }
 else
 {
 printf("You are in high school.\n");
 }
 return 0;
 }
