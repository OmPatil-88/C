#include<stdio.h>
int main(void) {

	//variable declaration
	int i_olp, j_olp, c_olp;

	//code
	printf("\n\n");
	i_olp = 0; 
	while(i_olp < 64) {
		j_olp = 0; 
		while(j_olp < 64) {
			c_olp = ((i_olp & 0x8) == 0) ^ ((j_olp & 0x8) == 0);
			if (c_olp == 0) {
				printf("  ");
			}
			if (c_olp == 1) {
				printf("* ");
			}
			j_olp++;
		}
		printf("\n\n");
		i_olp++;
	}
	return (0);
}