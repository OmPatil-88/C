#include<stdio.h>

//global scope
int global_count_olp = 0;

int main(void) {

	//function prototype
	void change_count_one(void);
	void change_count_two(void);
	void change_count_three(void);

	//code
	printf("\n");

	printf("main() : Value  of global_count = %d\n", global_count_olp);

	change_count_one();
	change_count_two();
	change_count_three();

	printf("\n");
	return (0);
}

//global scope
void change_count_one(void) {

	//code
	global_count_olp = 100;
	printf("chnage_count_one() : Value global_count = %d\n", global_count_olp);
}
//global scope
void change_count_two(void) {

	//code
	global_count_olp = global_count_olp+1;
	printf("chnage_count_two() : Value global_count = %d\n", global_count_olp);
}
//global scope
void change_count_three(void) {

	//code
	global_count_olp = global_count_olp+10;
	printf("chnage_count_three() : Value global_count = %d\n", global_count_olp);
}
