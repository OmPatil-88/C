#include<stdio.h>
#include<conio.h>

// DEFININF STRUCT 
struct MyData {

	int i_olp;
	float f_olp;
	double d_olp;
	char c_olp;
};

int main(void) {

	// function prototype
	struct MyData AddStructMembers_olp(struct MyData, struct MyData, struct MyData);

	// variable declarations
	struct MyData data1_olp, data2_olp, data3_olp, answer_data_olp;

	// code
	// DATA 1
	printf("\n\n\n\n");
	printf("*********** DATA 1 ***********\n\n");
	printf("Enter Integer Value For 'i' Of struct MyData data1 :");
	scanf("%d", &data1_olp.i_olp);

	printf("\n\n");
	printf("Enter Floating-Point Value For 'f' Of struct MyData data1 :");
	scanf("%f", &data1_olp.f_olp);


	printf("\n\n");
	printf("Enter Double Value For 'd' Of struct MyData data1 :");
	scanf("%lf", &data1_olp.d_olp);

	printf("\n\n");
	printf("Enter Character Value For 'c' Of struct MyData data1 :");
	data1_olp.c_olp = getch();

	//DATA 2
	printf("\n\n\n\n");
	printf("*********** DATA 2 ***********\n\n");
	printf("Enter Integer Value For 'i' Of struct MyData data2 :");
	scanf("%d", &data2_olp.i_olp);

	printf("\n\n");
	printf("Enter Floating-Point Value For 'f' Of struct MyData data2 :");
	scanf("%f", &data2_olp.f_olp);


	printf("\n\n");
	printf("Enter Double Value For 'd' Of struct MyData data2 :");
	scanf("%lf", &data2_olp.d_olp);

	printf("\n\n");
	printf("Enter Character Value For 'c' Of struct MyData data2 :");
	data2_olp.c_olp = getch();

	//DATA 3
	printf("\n\n\n\n");
	printf("*********** DATA 3 ***********\n\n");
	printf("Enter Integer Value For 'i' Of struct MyData data3 :");
	scanf("%d", &data3_olp.i_olp);

	printf("\n\n");
	printf("Enter Floating-Point Value For 'f' Of struct MyData data3 :");
	scanf("%f", &data3_olp.f_olp);


	printf("\n\n");
	printf("Enter Double Value For 'd' Of struct MyData data3 :");
	scanf("%lf", &data3_olp.d_olp);

	printf("\n\n");
	printf("Enter Character Value For 'c' Of struct MyData data3 :");
	data3_olp.c_olp = getch();

	answer_data_olp = AddStructMembers_olp(data1_olp, data2_olp, data3_olp);

	printf("\n\n\n\n");
	printf("************* ANSWER ************\n\n");
	printf("answer_data_i = %d\n", answer_data_olp.i_olp);
	printf("answer_data_f = %f\n", answer_data_olp.f_olp);
	printf("answer_data_d = %lf\n", answer_data_olp.d_olp);

	answer_data_olp.c_olp = data1_olp.c_olp;
	printf("answer_data.c (from data1) =%c\n\n", answer_data_olp.c_olp);
	
	answer_data_olp.c_olp = data2_olp.c_olp;
	printf("answer_data.c (from data2) =%c\n\n", answer_data_olp.c_olp);

	answer_data_olp.c_olp = data3_olp.c_olp;
	printf("answer_data.c (from data2) =%c\n\n", answer_data_olp.c_olp);
	
	return (0);
}
struct MyData AddStructMembers_olp(struct MyData md_one, struct MyData md_two, struct MyData md_three)
{
	// variable declarations
	struct MyData answer;
	//code
	answer.i_olp = md_one.i_olp + md_two.i_olp + md_three.i_olp;
	answer.f_olp = md_one.f_olp + md_two.f_olp + md_three.f_olp;
	answer.d_olp = md_one.d_olp + md_two.d_olp + md_three.d_olp;
	return (answer);
}