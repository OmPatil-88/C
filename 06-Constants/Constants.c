#include<stdio.h>

#define MY_PI_OLP 3.1415926535897932

#define AMC_STRING_OLP "AstroMediComp RTR"

//If First Constant is not Assigned a Value, It Is Assumed To Be 0 i.e:'SUNDAY' will be 0
//And The Rest Of The Constants Are Assigned Consecutive Integer Values From 0 onwords i.e. 'MONDAY' Will Be 1, 'TUESDAY' Will Be 2, and so on...

//Un-named enums
enum 
{
	SUNDAY,
	MONDAY,
	TUESDAY,
	WENDENSDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY
};

enum
{
	JANUARY = 1,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};

//Named enums
enum Numbers
{
	ONE,
	TWO,
	THREE,
	FOUR,
	FIVE=5,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN
};

enum boolean
{
	TRUE=1,
	FALSE=0
};


int main(void) {

	//local constant declarations
	const double epsilon_olp = 0.000001;

	//code
	printf("\n\n");
	printf("Local Constant Epsilon = %lf\n\n",epsilon_olp);

	printf("Sunday is Day Number = %d\n", SUNDAY);
	printf("Monday is Day Number = %d\n", MONDAY);
	printf("Tuesday is Day Number = %d\n", TUESDAY);
	printf("Wednesday is Day Number = %d\n", WENDENSDAY);
	printf("Thursday is Day Number = %d\n", THURSDAY);
	printf("Friday is Day Number = %d\n", FRIDAY);
	printf("Saturday is Day Number = %d\n", SATURDAY);

	printf("One Is Enum Number =%d\n", ONE);
	printf("Two Is Enum Number =%d\n", TWO);
	printf("Three Is Enum Number =%d\n", THREE);
	printf("Four Is Enum Number =%d\n", FOUR);
	printf("Five Is Enum Number =%d\n",FIVE);
	printf("Six Is Enum Number =%d\n", SIX);
	printf("Seven Is Enum Number =%d\n", SEVEN);
	printf("Eight Is Enum Number =%d\n", EIGHT);
	printf("Nine Is Enum Number =%d\n", NINE);
	printf("Ten Is Enum Number =%d\n",TEN);

	printf("January Is Month Number =%d\n",JANUARY);
	printf("February Is Month Number =%d\n", FEBRUARY);
	printf("March Is Month Number =%d\n", MARCH);
	printf("April Is Month Number =%d\n", APRIL);
	printf("May Is Month Number =%d\n", MAY);
	printf("June Is Month Number =%d\n", JUNE);
	printf("July Is Month Number =%d\n", JULY);
	printf("August Is Month Number =%d\n", AUGUST);
	printf("September Is Month Number =%d\n", SEPTEMBER);
	printf("October Is Month Number =%d\n", OCTOBER);
	printf("Noverber Is Month Number =%d\n", NOVEMBER);
	printf("December Is Month Number =%d\n", DECEMBER);

	printf("Value of TRUE is %d\n", TRUE);
	printf("Values Of FALSE Is = %d\n\n", FALSE);

	printf("MY_PI_OLP Macro value =%.10lf\n\n", MY_PI_OLP);
	printf("Area of Circle Of Radius 2 units %f\n\n",(MY_PI_OLP *2.0f *2.0f));

	printf("\n\n");

	printf(AMC_STRING_OLP);
	printf("\n\n");

	printf("AMC_STRING_OLP is :%s\n", AMC_STRING_OLP);
	printf("\n\n");

	return (0);


}