#include<stdio.h>

struct MyNumber_olp 
{
	int num_olp;
	int num_table_olp[10];
};

struct NumTables_olp 
{
	struct MyNumber_olp n_olp;
};

int main(void) {

	// variable declarations
	struct NumTables_olp tables_olp[10];
	int i_olp, j_olp;

	//code
	for (i_olp = 0; i_olp < 10; i_olp++) 
	{
		tables_olp[i_olp].n_olp.num_olp = (i_olp + 1);
	}

	for (i_olp = 0; i_olp < 10; i_olp++) 
	{
		printf("\n\n");
		printf("Table Of %d : \n\n", tables_olp[i_olp].n_olp.num_olp);
		for (j_olp = 0; j_olp < 10; j_olp++) 
		{
			tables_olp[i_olp].n_olp.num_table_olp[j_olp] = tables_olp[i_olp].n_olp.num_olp * (j_olp+1);
			printf("%d * %d = %d\n", tables_olp[i_olp].n_olp.num_olp, (j_olp + 1), tables_olp[i_olp].n_olp.num_table_olp[j_olp]);
		}
	}
	return (0);
}