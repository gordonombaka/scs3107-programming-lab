/*Write a program to evaluate the net salary of an employee given the following constraints: 
Basic salary : Ksh 120000 per month : 12% of Basic salary income tax. 
Social health insurance: Ksh 8,000 per month. Housing Levy: Ksh 7,000 per month. 
Insurance relief: Ksh 5,000. Loan repayment: 23,000. 
Net Salary = Basic Salary + Insurance relief – income tax – social insurance deduction – housing levy 
Display the inputs and final output (net salary) on the screen using the format
FirstName 	Surname 		Basic 		Salary
XXXXX	    XXXXX		    9999.9		9999.9
*/

#include <stdio.h>

void main() {
// Declare variables for the program

double basic_salary = 120000, net_salary, income_tax; 
char fname[50], sname[50];

int social_health = 8000;
int housing_levy = 7000;
int insurance = 5000;
int loan_repayment = 23000;

// Ask for inputs from the user

printf("Enter your first name: ");
scanf("%s", &fname);
printf("Enter your surname: ");
scanf("%s", &sname);



// Net Salary computation

income_tax = 0.12 * basic_salary;
net_salary = basic_salary + insurance - income_tax - social_health - housing_levy;

// Output
printf("\nFirstName\tSurname\tBasic\tSalary\n");
printf("\n%s\t%s\t%.2f\t%.2f\n", fname, sname, basic_salary, net_salary);

}