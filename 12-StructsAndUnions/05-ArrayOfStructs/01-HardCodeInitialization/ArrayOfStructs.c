#include<stdio.h>
#include<string.h>

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee {
	char name[NAME_LENGTH];
	int age;
	float salary;
	char sex;
	char marital_status[MARITAL_STATUS];
};

int main(void) {

	//varible declrations
	struct Employee EmployeeRecord[5];

	char employee_rajesh[] = "Rajesh";
	char empoyee_sameer[] = "Sameer";
	char employee_kalyani[] = "Kalyani";
	char employee_sonali[] = "Sonali";
	char employee_shantanu[] = "Shantanu";

	int i_olp;
    
	// ****** EMPLOYEE 1 ******
	strcpy(EmployeeRecord[0].name, employee_rajesh);
	EmployeeRecord[0].age = 30;
	EmployeeRecord[0].sex = 'M';
	EmployeeRecord[0].salary = 50000.0f;
	strcpy(EmployeeRecord[0].marital_status, "Unmarried");
	
	strcpy(EmployeeRecord[1].name, empoyee_sameer);
	EmployeeRecord[1].age = 32;
	EmployeeRecord[1].sex = 'M';
	EmployeeRecord[1].salary = 60000.0f;
	strcpy(EmployeeRecord[1].marital_status, "Married");

	strcpy(EmployeeRecord[2].name, employee_kalyani);
	EmployeeRecord[2].age = 29;
	EmployeeRecord[2].sex = 'F';
	EmployeeRecord[2].salary = 62000.0f;
	strcpy(EmployeeRecord[2].marital_status, "Unmarried");

	strcpy(EmployeeRecord[3].name, employee_sonali);
	EmployeeRecord[3].age = 33;
	EmployeeRecord[3].sex = 'F';
	EmployeeRecord[3].salary = 50000.0f;
	strcpy(EmployeeRecord[3].marital_status, "Married");

	strcpy(EmployeeRecord[4].name, employee_rajesh);
	EmployeeRecord[4].age = 35;
	EmployeeRecord[4].sex = 'M';
	EmployeeRecord[4].salary = 55000.0f;
	strcpy(EmployeeRecord[4].marital_status, "Married");

	printf("\n\n");
	printf("****** DISPLAYING EMPLOYEE RECORDS ****** \n\n");
	for (i_olp = 0; i_olp < 5; i_olp++) {

		printf("***** EMPLOYEE NUMBER %d ******\n", (i_olp + 1));
		printf("Name           :%s\n", EmployeeRecord[i_olp].name);

		if (EmployeeRecord[i_olp].sex == 'M' || EmployeeRecord[i_olp].sex == 'm')
			printf("Sex              : Male\n");
		else
			printf("Sex              : Female\n");

		printf("Salary            :Rs. %f\n", EmployeeRecord[i_olp].salary);
		printf("Marital Status    :%s\n", EmployeeRecord[i_olp].marital_status);
		printf("\n\n");
	}

	return (0);
}