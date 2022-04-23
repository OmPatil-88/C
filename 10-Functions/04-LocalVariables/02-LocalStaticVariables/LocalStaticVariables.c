#include<stdio.h>

//Global Scope
int main(void) {

	//variable declerations
	int a_olp = 5;

	//function prototypes
	void change_count(void);

	//code

	printf("\n");
	printf("A = %d \n\n", a_olp);

	/* local_count is initialized to 0.
	   local_count = local_count + 1 = 0 + 1 = 1
	*/
	change_count();
	/*Since, 'local_count' is a local static variable of change_count(), 
	it WILL retain its value from previous call to change_count().
	So local_count is 1 ocal_count = local_count + 1 = 1 + 1 = 2
	 */

	change_count();

	/* 
	Since, 'local_count' is a local static variable of change_count(), 
	it WILL retain its value from previous call to change_count().
    So local_count is 2 local_count = local_count + 1 = 2 + 1 = 3
	*/

	change_count();

	return (0);
}

//global scope

void change_count(void) {

	static int local_count = 0;
	local_count = local_count + 1;
	printf("Local Count = %d\n", local_count);
}