#include<stdio.h>
#include<string.h>

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

#define NUM_EMPLOYEES 5

struct Employee {
	char name[NAME_LENGTH];
	int age;
	char sex;
	float salary;
	char marital_status;
};

int main(void) {

     //function prototype
	void MyGetString_olp(char[], int);
	//varible declrations
	struct Employee EmployeeRecord[NUM_EMPLOYEES];

	int i_olp;
	// code

	for (i_olp = 0; i_olp < NUM_EMPLOYEES; i_olp++) {
		printf("\n\n\n\n");
		printf("********* DATA ENTRY FOR EMPLOYRR NUMBER %d *********\n", (i_olp + 1));

		printf("\n\n");
		printf("Enter Employee Name : ");
		MyGetString_olp(EmployeeRecord[i_olp].name,NAME_LENGTH);
	
		printf("\n\n");
		printf("Enter Employee's Age (in years) : ");
		scanf("%d", &EmployeeRecord[i_olp].age);

		printf("\n\n");
		printf("Enter Employee's Sex (M/m For Male,F/f For Female) : ");
		EmployeeRecord[i_olp].sex = getch();
		printf("%c", EmployeeRecord[i_olp].sex);
		EmployeeRecord[i_olp].sex = toupper(EmployeeRecord[i_olp].sex);

		printf("\n\n");
		printf("Enter Employee's Salary (in Indian Ruppes) : ");
		scanf("%f", &EmployeeRecord[i_olp].salary);

		printf("\n\n");
		printf("Is The Employee Married ?(Y/y For Yes,N/n For No):");
		EmployeeRecord[i_olp].marital_status = getch();
		printf("%c", EmployeeRecord[i_olp].marital_status);
		EmployeeRecord[i_olp].marital_status = toupper(EmployeeRecord[i_olp].marital_status);
	   
	}
	
     printf("\n\n");
	printf("****** DISPLAYING EMPLOYEE RECORDS ****** \n\n");
	for (i_olp = 0; i_olp < NUM_EMPLOYEES; i_olp++) {

		printf("***** EMPLOYEE NUMBER %d ******\n", (i_olp + 1));
		printf("Name           :%s\n", EmployeeRecord[i_olp].name);

		if (EmployeeRecord[i_olp].sex == 'M' || EmployeeRecord[i_olp].sex == 'm')
			printf("Sex              : Male\n");
		else if (EmployeeRecord[i_olp].sex == 'F' || EmployeeRecord[i_olp].sex == 'f')
			printf("Sex              : Female\n");
		else
			printf("Sex              : Invalid Data Entered\n");
		printf("Salary            :Rs. %f\n", EmployeeRecord[i_olp].salary);
	
		if (EmployeeRecord[i_olp].marital_status == 'Y' || EmployeeRecord[i_olp].marital_status == 'y')
			printf("Marital Status             :Married\n");
		else if (EmployeeRecord[i_olp].marital_status == 'N' || EmployeeRecord[i_olp].marital_status == 'n')
			printf("Marital Status             :Unmarried\n");
		else
			printf("Marital Status             :Invalid Data Entered\n");
	   
	   printf("\n\n");
	}

	return (0);
}

void MyGetString_olp(char str[], int str_size) {

    //variable declarations
	int i_olp;
	char ch_olp = '\0';

	//code
	i_olp = 0;
	do {
		ch_olp = getch();
		str[i_olp] = ch_olp;
		printf("%c", str[i_olp]);
		i_olp++;
	} while ((ch_olp != '\r') && (i_olp < str_size));

	if (i_olp == str_size)
		str[i_olp - 1] = '\0';
	else
		str[i_olp] = '\0';
}