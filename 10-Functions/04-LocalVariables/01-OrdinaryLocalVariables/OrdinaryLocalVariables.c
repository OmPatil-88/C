#include<stdio.h>

//Global Scope
int main(void) {

	//variable declerations
	int a_olp = 5;

	//function prototypes
	void change_count(void);

	//code

	printf("\n");
	printf("A = %d \n\n",a_olp);

	/* local_count is initialized to 0.
       local_count = local_count + 1 = 0 + 1 = 1 
	*/
	change_count();
	/*Since, 'local_count' is an ordinary local variable of change_count(), 
	  it will NOT retain its value from previous call to change_count().
	  So local_count is AGAIN initialized to 0
      local_count = local_count + 1 = 0 + 1 = 1 
	 */

	change_count();

	/* Since, 'local_count' is an ordinary local variable of change_count(), 
	   it will NOT retain its value from previous call to change_count().
	    So local_count is AGAIN initialized to 0
		local_count = local_count + 1 = 0 + 1 = 1
	*/
	
	change_count();

	return (0);
}

//global scope

void change_count(void) {

	int local_count = 0;
	local_count = local_count + 1;
	printf("Local Count = %d\n", local_count);
}