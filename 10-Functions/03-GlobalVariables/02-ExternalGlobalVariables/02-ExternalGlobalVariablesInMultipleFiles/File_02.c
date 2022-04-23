#include<stdio.h>



void change_count_two(void) {

	//variable declration
	extern int global_count_olp;
	//code
	global_count_olp = global_count_olp + 1;
	printf("change_count_two() : Value Of global_count in File_02 = %d\n", global_count_olp);
}