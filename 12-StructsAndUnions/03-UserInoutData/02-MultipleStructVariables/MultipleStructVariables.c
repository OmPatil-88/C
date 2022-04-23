#include<stdio.h>

struct MyPoint_olp
{
	int x_olp;
	int y_olp;
};

int main(void) {

	//variable declarations
	struct MyPoint_olp  point_A_olp, point_B_olp, point_C_olp, point_D_olp, point_E_olp;

	//code
	printf("\n\n");
	printf("Enter X-Coordinate For Point 'A' : ");
	scanf("%d",&point_A_olp.x_olp);
	printf("Enter Y-Coordinate For Point 'A' : ");
	scanf("%d", &point_A_olp.y_olp);


	printf("\n\n");
	printf("Enter X-Coordinate For Point 'B' : ");
	scanf("%d", &point_B_olp.x_olp);
	printf("Enter Y-Coordinate For Point 'B' : ");
	scanf("%d", &point_B_olp.y_olp);


	printf("\n\n");
	printf("Enter X-Coordinate For Point 'C' : ");
	scanf("%d", &point_C_olp.x_olp);
	printf("Enter Y-Coordinate For Point 'C' : ");
	scanf("%d", &point_C_olp.y_olp);


	printf("\n\n");
	printf("Enter X-Coordinate For Point 'D' : ");
	scanf("%d", &point_D_olp.x_olp);
	printf("Enter Y-Coordinate For Point 'D' : ");
	scanf("%d", &point_D_olp.y_olp);


	printf("\n\n");
	printf("Enter X-Coordinate For Point 'E' : ");
	scanf("%d", &point_E_olp.x_olp);
	printf("Enter Y-Coordinate For Point 'E' : ");
	scanf("%d", &point_E_olp.y_olp);

	printf("\n\n");
	printf("Co-ordinates (x, y) Of Point 'A' Are :(%d, %d)\n\n",point_A_olp.x_olp,point_A_olp.y_olp);
	printf("Co-ordinates (x, y) Of Point 'B' Are :(%d, %d)\n\n", point_B_olp.x_olp, point_B_olp.y_olp);
	printf("Co-ordinates (x, y) Of Point 'C' Are :(%d, %d)\n\n", point_C_olp.x_olp, point_C_olp.y_olp);
	printf("Co-ordinates (x, y) Of Point 'D' Are :(%d, %d)\n\n", point_D_olp.x_olp, point_D_olp.y_olp);
	printf("Co-ordinates (x, y) Of Point 'E' Are :(%d, %d)\n\n", point_E_olp.x_olp, point_E_olp.y_olp);
	return(0);
}