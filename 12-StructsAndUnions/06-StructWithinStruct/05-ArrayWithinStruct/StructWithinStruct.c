#include<stdio.h>

struct MyNumber_olp{
	int num_olp;
	int num_tables_olp[10];
};

struct NumTables {
	struct MyNumber_olp a_olp;
	struct MyNumber_olp b_olp;
	struct MyNumber_olp c_olp;
};

int main(void) {

	// variable declarations
	struct NumTables tables_olp;
	int i_olp;
	
	// code
	tables_olp.a_olp.num_olp = 2;
	for (i_olp = 0; i_olp < 10; i_olp++)
	tables_olp.a_olp.num_tables_olp[i_olp] = tables_olp.a_olp.num_olp * (i_olp + 1);
	
	printf("\n\n");
	printf("Table Of %d : \n\n", tables_olp.a_olp.num_olp);
	
	for (i_olp = 0; i_olp < 10; i_olp++) {
		printf("%d * %d = %d\n",tables_olp.a_olp.num_olp,(i_olp+1),tables_olp.a_olp.num_tables_olp[i_olp]);
	}

	tables_olp.b_olp.num_olp = 3;
	for (i_olp = 0; i_olp < 10; i_olp++)
		tables_olp.b_olp.num_tables_olp[i_olp] = tables_olp.b_olp.num_olp * (i_olp + 1);

	printf("\n\n");
	printf("Table Of %d : \n\n", tables_olp.b_olp.num_olp);

	for (i_olp = 0; i_olp < 10; i_olp++) {
		printf("%d * %d = %d\n", tables_olp.b_olp.num_olp, (i_olp + 1), tables_olp.b_olp.num_tables_olp[i_olp]);
	}

	tables_olp.c_olp.num_olp = 4;
	for (i_olp = 0; i_olp < 10; i_olp++)
		tables_olp.c_olp.num_tables_olp[i_olp] = tables_olp.c_olp.num_olp * (i_olp + 1);

	printf("\n\n");
	printf("Table Of %d : \n\n", tables_olp.c_olp.num_olp);

	for (i_olp = 0; i_olp < 10; i_olp++) {
		printf("%d * %d = %d\n", tables_olp.c_olp.num_olp, (i_olp + 1), tables_olp.c_olp.num_tables_olp[i_olp]);
	}
	return (0);
}