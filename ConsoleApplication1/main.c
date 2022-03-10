#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* function to read number from standard input (keyboard) */ 
void getNumber(int *);
/* function to calculate the sum of two numbers */
void calculateSum(int, int, int*);
/* function to display details to the screen */
void displayDetails(void);
int main() {
	int x = 10;
	int y = 3;
	int z = 0;
	int* num1 = &x; /* first number to be entered by user */
	int* num2 = &y; /* second number to be entered by user */
	int* sum = &z; /* stores sum of two numbers */
	displayDetails();
	/* prompt for and read first number */
	printf("Please enter first number : ");
	getNumber(num1);
	/* prompt for and read second number */
	printf("Please enter second number: ");
	getNumber(num2);
	/* add two numbers together and display to screen */
	calculateSum(*num1, *num2, sum);
	printf("\nSum of %d and %d is: %d\n\n", *num1, *num2, *sum);
	return 0;
}

/* function to read number from standard input (keyboard) */
void getNumber(int *num) {
	scanf("%d", num);
}
/* function to calculate the sum of two numbers */
void calculateSum(int number1, int number2, int *sum) {
	*sum = number1 + number2;
}
/* function to display details to the screen */ 
void displayDetails(void) 
{ 
	printf("Author : Erika\n");   
	printf("Stud ID : 110308922\n");   
	printf("Email ID : hosey001@mymail.unisa.edu.au\n");   
	printf("This is my own work as defined by the\n"); 
	printf("University's Academic Misconduct Policy.\n\n"); 
}
/* end function displayDetails */