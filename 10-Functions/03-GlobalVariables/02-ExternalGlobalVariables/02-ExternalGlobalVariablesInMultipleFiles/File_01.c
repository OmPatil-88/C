#include<stdio.h>

extern int global_count_olp;

void change_count_one(void) {

	//code
	global_count_olp = global_count_olp + 1;
	printf("change_count_one() : Value Of global_count in File_01 = %d\n", global_count_olp);
}