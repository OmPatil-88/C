#include<stdio.h>
#include<ctype.h>

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee {
	char name[NAME_LENGTH];
	int age;
	char sex;
	float salary;
	char marital_status;
};

int main(void) {

	//function prototype
	void MyGetString(char[], int);

	//variable declarations
	struct Employee* pEmployeeRecord_olp = NULL;
	int num_employees_olp, i_olp;

	//code
	printf("\n\n");
	printf("Enter Number Of Employees Whose Details You Eant Record :");
	scanf("%d", &num_employees_olp);

	printf("\n\n");
	pEmployeeRecord_olp = (struct Employee*)malloc(sizeof(struct Employee) * num_employees_olp);
	if (pEmployeeRecord_olp == NULL) {
		printf("FAILED TO ALLOCATE MEMORY FOR %d EPLOYEES !!! EXITTING NOW ...\n\n", num_employees_olp);
		exit(0);
	}
	else {
		printf("SUCCESSFULLY ALLOCATED MEMORY FOR %d EMPLOYEES !!!\n\n", num_employees_olp);
	}

	for (i_olp = 0; i_olp < num_employees_olp; i_olp++) {
		
		printf("\n\n\n\n");
		printf("********* DATA ENTRY FOR EMPLOYEE NUMBER %d *********\n",(i_olp + 1));
	    
		printf("\n\n");
		printf("Enter Employee Name :");
		MyGetString(pEmployeeRecord_olp[i_olp].name, NAME_LENGTH);

		printf("\n\n");
		printf("Enter Employee's Age (in years) : ");
		scanf("%d", &pEmployeeRecord_olp[i_olp].age);

		printf("\n\n");
		printf("Enter Employee's Sex (M/m For Male ,F/f For Female) : ");
		pEmployeeRecord_olp[i_olp].sex = getch();
		printf("%c", pEmployeeRecord_olp[i_olp].sex);
		pEmployeeRecord_olp[i_olp].sex = toupper(pEmployeeRecord_olp[i_olp].sex);
        
		printf("\n\n");
		printf("Enter Employee's Salary (in Indian Ruppes) : ");
		scanf("%f", &pEmployeeRecord_olp[i_olp].salary);

		printf("\n\n");
		printf("Is The Employee Married ?(Y/y) For Yes,(N/n) For No :");
		pEmployeeRecord_olp[i_olp].marital_status = getch();
		printf("%c", pEmployeeRecord_olp[i_olp].marital_status);
		pEmployeeRecord_olp[i_olp].marital_status = toupper(pEmployeeRecord_olp[i_olp].marital_status);

	}

	// *** DISPLAY ***
	printf("\n\n\n\n");
	printf("********** DISPLAYING EMPLOYEE RECORDS **********\n\n");
	for (i_olp = 0; i_olp < num_employees_olp; i_olp++) {

		printf("********** EMPLOYEE NUMBER %d **********\n\n", (i_olp + 1));
		printf("Name       :%s\n", pEmployeeRecord_olp[i_olp].name);
		printf("Age        :%d years \n", pEmployeeRecord_olp[i_olp].age);

		if (pEmployeeRecord_olp[i_olp].sex == 'M')
			printf("Sex       : Male\n");
		else if (pEmployeeRecord_olp[i_olp].sex == 'F')
			printf("Sex       : Female\n");
		else
			printf("Sex       : Invalid Data Entered\n");
			
		printf("Salary       : Rs.%f\n", pEmployeeRecord_olp[i_olp].salary);

		if (pEmployeeRecord_olp[i_olp].marital_status == 'Y')
			printf("Marital Status : Married \n");
		else if (pEmployeeRecord_olp[i_olp].marital_status == 'N')
			printf("Marital Status : Unmaried \n");
		else
			printf("Marital Status : Invalid Data Entered\n");

	}
	if (pEmployeeRecord_olp) {
		free(pEmployeeRecord_olp);
		pEmployeeRecord_olp = NULL;
		printf("MEMORY ALLOCATED TO %d EMPLOYEES HAS BEEN SUCCESSFULLY FREED !!!\n\n", num_employees_olp);
	}

	return (0);
}

void MyGetString(char str[], int str_size) {
	
	//variable declarations
	int i_olp;
	char ch = '\0';

	//code
	i_olp = 0;
	do {
		ch = getch();
		str[i_olp] = ch;
		printf("%c", str[i_olp]);
		i_olp++;
	} while ((ch != '\r') && (i_olp < str_size));

	if (i_olp == str_size)
		str[i_olp - 1] = '\0';
	else
		str[i_olp] = '\0';

}