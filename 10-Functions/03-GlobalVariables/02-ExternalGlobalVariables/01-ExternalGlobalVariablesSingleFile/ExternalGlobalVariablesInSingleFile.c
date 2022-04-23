#include<stdio.h>

//Global Scope

int main(void){

	//function prototypes
	void change_count(void);

	//variable declrations
	extern int global_count_olp;

	//code
	printf("\n");
	printf("Value Of global_count beore change_count() = %d\n", global_count_olp);
	change_count();
	printf("Value Of global_count after change_count() = %d\n", global_count_olp);
	printf("\n");
	return (0);
}

int global_count_olp = 0;
void change_count(void){
	//code 
	global_count_olp = 5;
	printf("Value Of global_count in change_count() = %d\n", global_count_olp);
}