#include<stdio.h>

//Defining struct
struct MyPoint_olp
{
	int x_olp;
	int y_olp;

};

int main(void) {

	//variable declarations
	struct MyPoint_olp  point_A, point_B, point_C, point_D, point_E;

	//code
	point_A.x_olp = 3;
	point_A.y_olp = 0;

    point_B.x_olp = 1;
	point_B.y_olp = 2;

	point_C.x_olp = 9;
	point_C.y_olp = 6;

	point_D.x_olp = 8;
	point_D.y_olp = 2;

	point_E.x_olp = 11;
	point_E.y_olp = 8;

	printf("\n\n");
	printf("Co-ordinates (x, y) Of Point 'A' Are :(%d, %d)\n\n",point_A.x_olp,point_A.y_olp);
	printf("Co-ordinates (x,y) Of Point 'B' Are :(%d, %d)\n\n",point_B.x_olp,point_B.y_olp);
	printf("Co-ordinates (x,y) Of Point 'C' Are :(%d, %d)\n\n",point_C.x_olp,point_C.y_olp);
	printf("Co-ordinates (x,y) Of Point 'D' Are :(%d, %d)\n\n",point_D.x_olp,point_D.y_olp);
	printf("Co-ordinates (x,y) Of Point 'E' Are :(%d, %d)\n\n",point_E.x_olp,point_E.y_olp);
	return (0);
}